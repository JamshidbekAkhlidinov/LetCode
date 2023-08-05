<?php

class Solution
{
    /**
     * @param Integer[] $nums
     * @return Boolean
     */
    function containsDuplicate($nums)
    {
        $new_array = array_count_values($nums);
        foreach ($new_array as $item) {
            if ($item >= 2) {
                return true;
            }
        }
        return false;
    }
}

$l =  new Solution();
echo $l->containsDuplicate([1,1,1,3,3,4,3,2,4,2])."<br>\n";
?>