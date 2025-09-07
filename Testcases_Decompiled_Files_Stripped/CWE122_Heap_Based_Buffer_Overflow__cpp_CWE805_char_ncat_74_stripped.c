
void FUN_00102ac0(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c5c(param_1,param_2);
  return;
}




void FUN_0010161a(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_84;
  char *local_80;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 2;
  puVar1 = (undefined8 *)FUN_001016f4(param_1,&local_84);
  local_80 = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncat(local_80,local_78,100);
  FUN_00103a52(local_80);
  if (local_80 != (char *)0x0) {
    operator_delete__(local_80);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102d02(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102d45(param_2);
  puVar2 = (undefined4 *)FUN_0010238a(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




undefined8 FUN_00103890(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




long FUN_001016f4(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined local_39;
  undefined8 local_38;
  undefined local_30 [8];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = FUN_00101820(param_1,param_2);
  local_28 = FUN_0010184a(param_1);
  cVar2 = FUN_00101868(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_0010188e(param_1);
    uVar3 = FUN_001018b4(&local_38);
    cVar2 = FUN_001018d6(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101794;
    }
  }
  bVar1 = true;
LAB_00101794:
  if (bVar1) {
    uVar3 = FUN_001018fd(param_2);
    FUN_0010193a(local_30,uVar3);
    FUN_00101972(&local_28,&local_38);
    local_38 = FUN_00101994(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_001018b4(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_001030e0(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_0010310a(param_1);
  return;
}




void FUN_00104023(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102cb0(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102d02(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010238a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102876(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102520(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00103460(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103562(local_18,param_1);
  FUN_00103580(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102814(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001029f8(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




undefined8 * FUN_001027e8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_0010423d(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




int FUN_00103f43(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




long FUN_00102748(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00103bd4(undefined4 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  local_18 = param_1;
  printf("%ls\n",&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101b2a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010220e(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001028d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102948(param_1);
  FUN_00102aea(uVar1,param_2,1);
  return;
}




void FUN_00101972(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined4 FUN_0010188e(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101b7a(param_1);
  return unaff_EBX;
}




undefined8 FUN_001041a5(undefined8 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *param_1 = 0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *param_1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}




undefined8 FUN_00101c58(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ec9(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010318a(local_88);
                    /* try { // try from 00102f04 to 00102f98 has its CatchHandler @ 00102fe4 */
  puVar1 = (undefined *)operator_new__(100);
  *puVar1 = 0;
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_001016f4(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_001016f4(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_001016f4(local_88,local_58);
  *puVar2 = puVar1;
  FUN_001031ca(local_58,local_88);
                    /* try { // try from 00102fa0 to 00102fa4 has its CatchHandler @ 00102fcf */
  FUN_0010161a(local_58);
  FUN_001031aa(local_58);
  FUN_001031aa(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101c6a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_001023c6(param_1);
  uVar2 = FUN_00101c58(param_4);
  uVar3 = FUN_00101c46(param_3);
  uVar4 = FUN_00101c34(param_2);
  FUN_001023f2(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_001031aa(undefined8 param_1)

{
  FUN_00103250(param_1);
  return;
}




void FUN_00102d45(undefined8 param_1)

{
  FUN_00102d63(param_1);
  return;
}




undefined4 FUN_001018d6(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00103fcb(void)

{
  return;
}




void FUN_0010334a(void)

{
  return;
}




void FUN_001021d0(undefined8 param_1,undefined8 param_2)

{
  FUN_0010288c(param_1,param_2);
  FUN_001028d0(param_1,param_2);
  return;
}




undefined8 * FUN_001027a6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00103628(undefined8 param_1,undefined8 param_2)

{
  FUN_00103524(param_1,param_2);
  return param_1;
}




void FUN_00103f5d(void)

{
  return;
}




void FUN_00104002(void)

{
  return;
}




void FUN_001038bc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_001038f6(param_2);
  FUN_00103908(uVar1,uVar2);
  return;
}




undefined8 FUN_001016cb(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001018b4(undefined8 *param_1)

{
  FUN_00101b88(*param_1);
  return;
}




void FUN_00103250(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010222c(param_1);
  FUN_0010335a(param_1,uVar1);
  FUN_0010314a(param_1);
  return;
}




void FUN_00103fec(void)

{
  return;
}




void FUN_0010310a(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 FUN_00102948(undefined8 param_1)

{
  return param_1;
}




void FUN_00101569(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_84;
  char *local_80;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 2;
  puVar1 = (undefined8 *)FUN_001016f4(param_1,&local_84);
  local_80 = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncat(local_80,local_78,100);
  FUN_00103a52(local_80);
  if (local_80 != (char *)0x0) {
    operator_delete__(local_80);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102c5c(void)

{
  return;
}




undefined8 FUN_001038f6(undefined8 param_1)

{
  return param_1;
}




void FUN_00102c70(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103524(undefined8 param_1,undefined8 param_2)

{
  FUN_00103656(param_1,param_2);
  return;
}




void FUN_00102d81(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010318a(local_88);
                    /* try { // try from 00102dbc to 00102e50 has its CatchHandler @ 00102e9c */
  puVar1 = (undefined *)operator_new__(0x32);
  *puVar1 = 0;
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_001016f4(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_001016f4(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_001016f4(local_88,local_58);
  *puVar2 = puVar1;
  FUN_001031ca(local_58,local_88);
                    /* try { // try from 00102e58 to 00102e5c has its CatchHandler @ 00102e87 */
  FUN_00101569(local_58);
  FUN_001031aa(local_58);
  FUN_001031aa(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010275e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001029f8(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001029f8(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_001018fd(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001027d2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00102a5a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102c37(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001029f8(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103ce2(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101868(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00102aea(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c70(param_1,param_2,param_3);
  return;
}




long FUN_0010344a(long param_1)

{
  return param_1 + 0x10;
}




void FUN_001023f2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_001016cb(0x30,param_2);
  uVar1 = FUN_00101c58(param_5);
  uVar2 = FUN_00101c46(param_4);
  uVar3 = FUN_00101c34(param_3);
  uVar4 = FUN_00101b88(param_2);
  uVar5 = FUN_00102948(param_1);
                    /* try { // try from 00102481 to 00102485 has its CatchHandler @ 00102488 */
  FUN_00102988(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103ba9(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010425c(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_001024d0(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010220e(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102258(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = param_3;
  local_38 = param_2;
  while (local_38 != 0) {
    uVar2 = FUN_00102093(local_38);
    cVar1 = FUN_001018d6(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001027d2(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_0010290a(local_38);
    }
  }
  FUN_0010220e(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec0)();
  return;
}




void FUN_00101820(undefined8 param_1,undefined8 param_2)

{
  FUN_00101ada(param_1,param_2);
  return;
}




void FUN_00103aaa(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102093(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102854(param_1);
  FUN_00102876(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00102536(long param_1)

{
  return param_1 + 0x20;
}




void FUN_0010380d(undefined8 param_1)

{
  FUN_001030b3(param_1);
  return;
}




long FUN_001030b3(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00101ada(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102242(param_1);
  uVar2 = FUN_0010222c(param_1);
  FUN_00102258(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00101bbc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101baa(param_2);
  FUN_00102334(param_1,uVar1);
  return;
}




void FUN_0010314a(undefined8 param_1)

{
  FUN_00103230(param_1);
  return;
}




void FUN_00103ff7(void)

{
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101cea(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  long local_50;
  long local_48 [5];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  local_60 = param_1;
  lVar3 = FUN_001024d0(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102242(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_0010254c(local_50);
    cVar2 = FUN_001018d6(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_0010254c(local_50);
      cVar2 = FUN_001018d6(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102814(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102536(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102536(local_60);
          local_48[1] = 0;
          FUN_0010256a(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_001027e8(local_48);
          uVar6 = FUN_0010254c(*puVar5);
          cVar2 = FUN_001018d6(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_001025aa(local_60,param_3);
          }
          else {
            lVar3 = FUN_001027d2(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_0010256a(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_0010275e(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102748(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102748(local_60);
        uVar6 = FUN_00102748(local_60);
        FUN_0010275e(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_001027a6(local_48);
        uVar6 = FUN_0010254c(*puVar5);
        cVar2 = FUN_001018d6(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_001025aa(local_60,param_3);
        }
        else {
          lVar3 = FUN_001027d2(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_0010256a(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_0010275e(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00102078;
  }
  lVar3 = FUN_00102520(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101d8c:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102536(local_60);
    uVar6 = FUN_0010254c(*puVar5);
    cVar2 = FUN_001018d6(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101d8c;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102536(local_60);
    local_48[1] = 0;
    FUN_0010256a(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_001025aa(local_60,param_3);
  }
LAB_00102078:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_0010295a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b1c(param_1,param_2,0);
  return;
}




void FUN_00103a52(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010400d(void)

{
  return;
}




undefined8
FUN_00101994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101c58(param_5);
  uVar2 = FUN_00101c46(param_4);
  uVar3 = FUN_00101c34(param_3);
  local_40 = FUN_00101c6a(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101a10 to 00101a53 has its CatchHandler @ 00101a91 */
  uVar1 = FUN_00102093(local_40);
  local_38 = FUN_00101cea(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001021d0(param_1,local_40);
    FUN_0010220e(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_001020e6(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00102316(undefined8 param_1)

{
  FUN_00102920(param_1);
  return;
}




void FUN_00102d63(undefined8 param_1)

{
  FUN_0010236c(param_1);
  return;
}




void FUN_00103fe1(void)

{
  return;
}




void FUN_0010239c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101baa(param_2);
  *param_1 = uVar1;
  return;
}




ulong FUN_00103d42(long param_1,ulong param_2,long param_3)

{
  ushort **ppuVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2)] & 0x1000) == 0) break;
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2 + 1)] & 0x1000) == 0) break;
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00105094,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103656(void)

{
  return;
}




void FUN_00103f89(void)

{
  return;
}




void FUN_00101b88(long param_1)

{
  FUN_00102316(param_1 + 0x20);
  return;
}




void FUN_00102854(long param_1)

{
  FUN_00102aa2(param_1 + 0x20);
  return;
}




undefined8 FUN_00103908(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001023c6(param_1);
  uVar2 = FUN_001038f6(param_2);
  FUN_00103954(param_1,uVar1,uVar2);
  return uVar1;
}




undefined8 FUN_0010290a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103011(void)

{
  FUN_00102ec9();
  return;
}




void FUN_00102b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c34(param_3);
  uVar1 = FUN_00101c46(param_4);
  FUN_00101910(local_38,uVar1);
  FUN_00101c58(param_5);
  uVar1 = FUN_001016cb(0x10,param_2);
                    /* try { // try from 00102bf4 to 00102bf8 has its CatchHandler @ 00102bfb */
  FUN_00102cb0(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102a0a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010220e(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103580(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102242(param_1);
  uVar2 = FUN_0010366a(param_2);
  uVar1 = FUN_00103680(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102748(param_1);
  uVar2 = FUN_001037ef(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102536(param_1);
  uVar2 = FUN_0010380d(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




undefined8 FUN_00101c46(undefined8 param_1)

{
  return param_1;
}




void FUN_0010421e(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010236c(undefined8 param_1)

{
  FUN_00102932(param_1);
  return;
}




void FUN_0010331a(undefined8 param_1)

{
  FUN_001034c4(param_1);
  return;
}




void FUN_0010256a(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_001029f8(param_3);
  param_1[1] = *puVar1;
  return;
}




long FUN_00102242(long param_1)

{
  return param_1 + 8;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_001014b0();
    DAT_00109020 = 1;
    return;
  }
  return;
}




undefined8 FUN_0010366a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00102c4a(undefined8 param_1)

{
  return param_1;
}




void FUN_00101bf4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010236c(param_2);
  uVar1 = FUN_0010238a(uVar1);
  FUN_0010239c(param_1,uVar1);
  return;
}




void FUN_00103f7e(void)

{
  return;
}




undefined8 FUN_0010193a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101baa(param_2);
  FUN_00101bbc(param_1,uVar1);
  return param_1;
}




void FUN_00103a00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_001038f6(param_3);
  puVar3 = (undefined8 *)FUN_001016cb(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00101b7a(void)

{
  return;
}




void FUN_001033c4(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001034d3(param_1,param_2);
  FUN_0010354e(param_1,param_2);
  FUN_001030e0(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103b53(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010316a(undefined8 param_1)

{
  FUN_001031f4(param_1);
  return;
}




void FUN_00103954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_001016cb(0x30,param_2);
  uVar1 = FUN_001038f6(param_3);
  uVar2 = FUN_00101b88(param_2);
  uVar3 = FUN_00102948(param_1);
  FUN_001039c2(uVar3,uVar2,uVar1);
  return;
}




void FUN_00102988(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101c58(param_5);
  uVar2 = FUN_00101c46(param_4);
  uVar3 = FUN_00101c34(param_3);
  FUN_00102b6c(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_0010222c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010254c(undefined8 param_1)

{
  FUN_00102093(param_1);
  return;
}




undefined8 FUN_00102c98(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




ulong FUN_00103e46(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8 + 4));
    if (iVar1 == 0) break;
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_0010509c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103caf(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




long FUN_00103680(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_0010382c(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103890(param_2);
                    /* try { // try from 001036ef to 00103781 has its CatchHandler @ 001037ad */
    uVar2 = FUN_00103680(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001038a6(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_0010382c(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103890(local_38);
      uVar2 = FUN_00103680(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001038a6(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00104290(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _DT_INIT();
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}




undefined4 * FUN_0010382c(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102854(param_2);
  puVar2 = (undefined4 *)FUN_001038bc(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_001039c2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001038f6(param_3);
  FUN_00103a00(param_1,param_2,uVar1);
  return;
}




bool FUN_00104127(pthread_t *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_join(*param_1,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 == 0;
}




void FUN_00103fb5(void)

{
  return;
}




undefined8 FUN_00101baa(undefined8 param_1)

{
  return param_1;
}




undefined8
FUN_001020e6(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

{
  char cVar1;
  bool bVar2;
  _Rb_tree_node_base *p_Var3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    p_Var3 = (_Rb_tree_node_base *)FUN_00102242(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_0010254c(param_3);
      uVar5 = FUN_00102093(param_4);
      cVar1 = FUN_001018d6(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_0010216a;
      }
    }
  }
  bVar2 = true;
LAB_0010216a:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_0010220e(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_0010354e(void)

{
  return;
}




void FUN_0010288c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101b88(param_2);
  uVar2 = FUN_00102948(param_1);
  FUN_00102ac0(uVar2,uVar1);
  return;
}




void FUN_00103fd6(void)

{
  return;
}




void FUN_00103230(undefined8 param_1)

{
  FUN_0010334a(param_1);
  return;
}




void FUN_001016e1(void)

{
  return;
}




void FUN_00103ad2(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103f68(void)

{
  return;
}




void FUN_0010335a(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001027d2(local_28);
    FUN_0010335a(param_1,uVar1);
    lVar2 = FUN_0010290a(local_28);
    FUN_001021d0(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00104018(void)

{
  return;
}




void FUN_00103c81(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00101c34(undefined8 param_1)

{
  return param_1;
}




void FUN_00103f9f(void)

{
  return;
}




undefined8 FUN_00103021(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103a52("Calling good()...");
  FUN_00103011();
  FUN_00103a52("Finished good()");
  FUN_00103a52("Calling bad()...");
  FUN_00102d81();
  FUN_00103a52("Finished bad()");
  return 0;
}




undefined8 FUN_001029f8(undefined8 param_1)

{
  return param_1;
}




void FUN_0010184a(undefined8 param_1)

{
  FUN_00101b2a(param_1);
  return;
}




undefined8 FUN_001034d3(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103628(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_0010405a(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  pthread_t local_20;
  pthread_t *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_18 = (pthread_t *)malloc(0x18);
  if (local_18 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18[1] = param_1;
    local_18[2] = param_2;
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104023,local_18);
    if (iVar1 == 0) {
      *local_18 = local_20;
      *param_3 = local_18;
      uVar2 = 1;
    }
    else {
      free(local_18);
      uVar2 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}




void FUN_00103562(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010318a(undefined8 param_1)

{
  FUN_0010316a(param_1);
  return;
}




undefined8 FUN_00103434(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001025aa(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  char local_59;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = FUN_0010222c(param_1);
  local_50 = FUN_00102242(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00102093(local_58);
    local_59 = FUN_001018d6(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001027d2(local_58);
    }
    else {
      local_58 = FUN_0010290a(local_58);
    }
  }
  FUN_0010220e(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102a0a(param_1);
    cVar1 = FUN_00101868(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102a5a(local_38,&local_58,&local_50);
      goto LAB_0010272c;
    }
    FUN_001027a6(&local_48);
  }
  uVar2 = FUN_0010254c(local_48);
  cVar1 = FUN_001018d6(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102814(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102a5a(local_38,&local_58,&local_50);
  }
LAB_0010272c:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00102932(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00103f25(void)

{
  return 1;
}




void FUN_00103f94(void)

{
  return;
}




void FUN_00102aa2(undefined8 param_1)

{
  FUN_00102c4a(param_1);
  return;
}




void FUN_00102334(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101baa(param_2);
  FUN_0010239c(param_1,uVar1);
  return;
}




void FUN_00103fc0(void)

{
  return;
}




undefined8 FUN_00104182(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00102c37(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x001014c3) */
/* WARNING: Removing unreachable block (ram,0x001014cf) */

void FUN_001014b0(void)

{
  return;
}




void FUN_0010333a(void)

{
  return;
}




undefined8 FUN_00103f34(void)

{
  return 0;
}




void FUN_00103b7e(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103a78(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00104300(void)

{
  return;
}




void FUN_0010328e(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001033c4(param_1,param_2);
  lVar1 = FUN_00103434(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_0010344a(param_1);
                    /* try { // try from 001032e9 to 001032ed has its CatchHandler @ 001032f3 */
    uVar3 = FUN_00103460(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00103b28(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001034c4(void)

{
  return;
}




void FUN_001031f4(long param_1)

{
  FUN_0010331a(param_1);
  FUN_0010333a(param_1);
  FUN_001030e0(param_1 + 8);
  return;
}




void FUN_00101910(undefined8 param_1,undefined8 param_2)

{
  FUN_00101bf4(param_1,param_2);
  return;
}




void FUN_00102b1c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102c98(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




undefined8 FUN_001038a6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103f73(void)

{
  return;
}




void FUN_00103afe(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103c56(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102920(undefined8 param_1)

{
  return param_1;
}




void FUN_0010220e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103faa(void)

{
  return;
}




void FUN_00103c2e(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




long FUN_00103086(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




/* WARNING: Removing unreachable block (ram,0x00101504) */
/* WARNING: Removing unreachable block (ram,0x00101510) */

void FUN_001014e0(void)

{
  return;
}




void FUN_001031ca(undefined8 param_1,undefined8 param_2)

{
  FUN_0010328e(param_1,param_2);
  return;
}




void FUN_001037ef(undefined8 param_1)

{
  FUN_00103086(param_1);
  return;
}




void FUN_001023c6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102948(param_1);
  FUN_0010295a(uVar1,1);
  return;
}



