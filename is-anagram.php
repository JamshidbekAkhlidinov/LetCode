<?php

class Solution
{
    /**
     * @param String $s
     * @param String $t
     * @return Boolean
     */
    function isAnagram($s, $t) {
        $s_array = str_split($s);
        $t_array = str_split($t);

        return array_count_values($s_array) == array_count_values($t_array);
    }
}

$l =  new Solution();
echo $l->isAnagram("rat","car")."<br>\n";
?>