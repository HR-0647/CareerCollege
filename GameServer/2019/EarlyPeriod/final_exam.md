# 2019�N �O�� ��������

�����̉񓚂́A�ȉ��̒ʂ�ɂ��邱�ƁB

- �P�₠����P�t�@�C���ɋL�q�B�t�@�C�����́u1-1.txt�v�ł��u��1-1.txt�v�ł��B�t�H�[�}�b�g��text�A�g���q��.txt�Ƃ���
- �����R�[�h��UTF-8�̂��邱��

�����̒��ӎ����͈ȉ��̒ʂ�

- �����Ȃ̂Łu���͂Ƃ̑��k�v�u���l�̓��Ă̔`�����v�͕s����
- �l�b�g�����g���Ē��ׂ�̂͋���
- �R�[�h��SQL��׋��p�T�[�o(dev2.m-fr.net)�Ŋm�F����̂͐���
- ������̖����u�P�₠����10�_�v�𖞓_�Ƃ��A��肪��������K�X���_����

��o�́A�ȉ��̒ʂ�

- ���Ɠ��ɒ�o����ꍇ�́A�t�@�C���T�[�o���̏���̃t�H���_�̒��Ɂu�����̖��O�̃t�H���_�v���쐬���āA�����ɉ񓚃t�@�C���ꎮ���o
- ���ƊO�Œ�o����ꍇ�́u�����̖��O�̃t�H���_�v�ɉ񓚃t�@�C���ꎮ����ꂽ��Ԃ�zip�`���Ōł߂ċ����o�R�Œ�o(��o������9/3)

## �u����̃Q�[���v��PC��l��������e�[�u�����쐬

�u�P�Q�[�����̂P�v���C�L�����N�^�v�̏����i�[�ł���CREATE TABLE�����쐬���Ȃ����B    
�J�������́A���{������̂܂܎g���Ă��A�K�؂ȉp�ꖼ�ɂ��Ă��悢�A�Ƃ��܂��B    
���l�ɂ��ẮA��������u���̒l�������Ȃ��A65535�ȉ��v���x�̒l��z�肵�Ȃ����B    


### (��1) �t�@�C�i���t�@���^�W�[�V �̃L�����N�^�쐬

�t�@�C�i���t�@���^�W�[�V �̃v���C�L�����N�^��l���i�[�ł���e�[�u�����쐬���Ȃ����B    
���O�ȊO�͂��ׂĐ��l�ŁA�������ƌo���l��65535�ȉ��A����ȊO�̐��l��255�ȉ��̒l���Ƃ�܂��B    
�Ȃ��A�p�����^�͈ȉ��̒ʂ�Ƃ���B    

- ���O
- HP
- �ő�HP
- MP
- �ő�MP
- ��
- ��
- ��
- �m
- ��
- ������
- EXP
- ���x��


## ��{�I��SQL�\��

�ȉ��̃e�[�u���ɑ΂��āA�K�؂ȃf�[�^���擾�ł���SQL���������Ȃ����B

```
CREATE TABLE exam (
  id int unsigned NOT NULL AUTO_INCREMENT,
  num int,
  name varchar(128),
  created datetime,
  PRIMARY KEY(id)
);
```

### (��2-1)select���F�e�[�u���S��

exam�e�[�u���́u�S�Ẵ��R�[�h�v���擾����SQL�������Ȃ����B

### (��2-2)select���FWHERE��

exam�e�[�u���̂����uid��10�̃��R�[�h�v���擾����SQL�������Ȃ����B

## PHP�ł�DB�ڑ�

### (��3-1)PDO�ɂ��ڑ�

PHP�ŁAPDO�N���X���g����database�ɐڑ�����v���O�����������Ȃ����B    
�ڑ����͈ȉ��̒ʂ�Ƃ���B    

- �ڑ�ID: test
- �ڑ��p�X���[�h: pass
- �ڑ�database: database
- �ڑ��T�[�o: 192.168.0.1
- �����R�[�h: utf8mb4

### (��3-2)PDO�ɂ��SQL���s(INSERT)

��2�ɏo�Ă����e�[�u���ɂP���R�[�h�ǉ�����PHP�v���O�����������Ȃ����B    
INSERT����f�[�^�͔C�ӂƂ���B


## �p�X���[�h�̃n�b�V��

### (��4)�F�؏��̓o�^

$pass�Ɂu���[�U������͂��ꂽ�p�X���[�h�������Ă���v�O��ŁA�p�X���[�h��K�؂Ƀn�b�V���������Ȃ����B    
�n�b�V���̌��ʁA����ѕK�v�ł���Εt�я����A���ꂼ��킩��悤��echo���Ȃ����B    
�Ȃ��APHP�̃o�[�W������5.5�ȍ~�ł���A�Ƃ��܂��B    

## �ȒP�ȗ����̍쐬

### (��5-1)�u�������擾����֐��v�̍쐬

PHP�Łu�P����U�܂ł̊Ԃ̗����v���쐬���A�߂�l�Ƃ��ĕԂ��֐��������Ȃ����B    
�֐����́udice_6�v�Ƃ��܂��B

### (��5-2)��������g���������̍쐬(���)

�ȉ��̕����񂪉��߉\�ȃR�[�h�������Ȃ����B    
�Ȃ��u�v�Z���ʂ����̒l�ɂȂ�v�ꍇ�A���̂܂ܕ��̒l��return���Ȃ����B

- 2D6+2
- 1d4+2d6+3
- 1D10+2d6-1d4-2

## �g�����U�N�V����

### (��6)�g�����U�N�V�������g��SQL���̍쐬�F�L��������

�L���ۋ���������������߂ɕK�v��SQL���A�g�����U�N�V�������g���ēK�؂ɏ����Ȃ����B    
�܂��A�J�[�h�������O�Ɂu�L���ۋ��̎c��������Ă��邩�ǂ����v��SQL�Ŋm�F���Ȃ����B    

- user_id��2016�Ƃ���
- user�e�[�u���̎c��(money)���擾�FPHP�v���O�����ł����if�����Ń`�F�b�N�B�����SQL�݂̂Ȃ̂Ń`�F�b�N�����̓I�~�b�g
- user�e�[�u����money�̒l��100�A���Z
- user_card�e�[�u����insert�B�������J�[�hID(card_id)��114�Ƃ���

```
CREATE TABLE user (
  user_id int unsigned NOT NULL,
  money int unsigned ,
  PRIMARY KEY(user_id)
);
```

```
CREATE TABLE user_card (
  user_card_id int unsigned NOT NULL AUTO_INCREMENT,
  user_id int unsigned NOT NULL,
  card_id int unsigned NOT NULL,
  created datetime,
  PRIMARY KEY(user_card_id)
);
```

## �A�C�e���g�p

�O��ƂȂ�PC�N���X�͈ȉ��Ƃ���B    
�Ȃ��Asetter��getter�͏ȗ����Ă��邪�A�L�q����Ă�����̂Ƃ���(���\�b�h���̓X�l�[�N(get_hp())�ł��L������(getHp())�ł��ǂ���ł��悢)�B    

```
class PC {
// �e�v���p�e�B�ւ�setter��getter(�ȗ�

//private:
private $max_hp_;
private $max_mp_;
private $hp_;
private $mp_;
private $exp_; // �o���l
};
```

### (��7)�v���O�����^�̃A�C�e���g�p(���)

�ȉ���5��ނ̃A�C�e�����u�v���O�����^�v�Ŏ�������B    
�Ȃ��A��������֐��͈ȉ��̊֐����A�����������̂Ƃ���B�u���͒l�̃G���[�v�͍l�����Ȃ��Ă悢�B    

```
function item_use($PC�C���X�^���X, $�A�C�e��ID);
```

- HP��100�_�񕜂���A�C�e��(�A�C�e��ID: 1)
- MP��50�_�񕜂���A�C�e��(�A�C�e��ID: 2)
- HP��50%�񕜂���A�C�e��(�A�C�e��ID: 3)
- HP��50%, MP��50%�񕜂���A�C�e��(�A�C�e��ID: 4)
- �o���l��+1000�����A�C�e��(�A�C�e��ID: 5)



## �Q�[���̊��z

### (��8)�Q�[���̊��z

���Ƃł�����{�[�h�Q�[���u���f�B�`�v�u�h�~�j�I���v�u�f�B�v���}�V�[�v����P�I�сA���z�������Ȃ����B    
�����́A�ŋ߂���Ă���Q�[������P�I�сA��������߂镶�͂������Ȃ����B    
