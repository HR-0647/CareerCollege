<?php  // BoxTest.php
// http://dev2.m-fr.net/XXXX/gatya/BoxTest.php

require_once('./Box.php');
$box_obj = new Box(3, 'box_1');
//var_dump($box_obj);

// �ꖇ�J�[�h������
$card_id = $box_obj->drow();
//var_dump($card_id);

