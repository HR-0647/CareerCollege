<?php // Authentication.php

class Authentication
{
    /**
     * ���O�C��
     */
    static public function isLogin($id, $pass){
        // �����ȒP��validate
        if ( ('' === $id)||('' === $pass) ) {
            return false;
        }

        // DB�n���h�����擾����
XXXXXXX
        $dbh = DB::getHandle();

        // DB����ID��password���擾����(SQL���s)

        // ���͂�ID/pass��DB��ID/pass���r����
//        if (�����s��v��������) {
            return false;
//        }
        // ��v���Ă���
        return true;
    }

}
