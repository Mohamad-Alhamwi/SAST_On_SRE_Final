
long FUN_00102004(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00104001(void)

{
  return;
}




undefined8 FUN_00104090(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104059,local_18);
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




undefined8 FUN_001021c8(undefined8 param_1)

{
  return param_1;
}




void FUN_00103040(void)

{
  return;
}




void FUN_00103bdf(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8
FUN_00102704(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_001029de(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102ce8(param_3);
      uVar5 = FUN_001026b1(param_4);
      cVar1 = FUN_00101d7a(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102788;
      }
    }
  }
  bVar2 = true;
LAB_00102788:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_001027ee(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_001021a6(long param_1)

{
  FUN_00102ab2(param_1 + 0x20);
  return;
}




void FUN_0010189e(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_001018c8(param_1);
  return;
}




void FUN_00101cc4(undefined8 param_1,undefined8 param_2)

{
  FUN_001020f8(param_1,param_2);
  return;
}




undefined8 FUN_00103f6a(void)

{
  return 0;
}




void FUN_00104330(void)

{
  return;
}




void FUN_00101968(undefined8 param_1)

{
  FUN_00101a0e(param_1);
  return;
}




undefined8 FUN_00102c6c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001027ee(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c44(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_0010208d(local_28);
    FUN_00101c44(param_1,uVar1);
    lVar2 = FUN_001020a3(local_28);
    FUN_001020ba(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00101c34(void)

{
  return;
}




void FUN_00103f9e(void)

{
  return;
}




void FUN_00103d18(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103f93(void)

{
  return;
}




void FUN_00103fd5(void)

{
  return;
}




void FUN_00103670(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00103720(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00101a4c(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101cc4(param_1,param_2);
  local_28 = FUN_00101cee(param_1);
  cVar2 = FUN_00101d0c(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101d32(param_1);
    uVar3 = FUN_00101d58(&local_38);
    cVar2 = FUN_00101d7a(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101aec;
    }
  }
  bVar1 = true;
LAB_00101aec:
  if (bVar1) {
    uVar3 = FUN_00101da1(param_2);
    FUN_00101dde(local_30,uVar3);
    FUN_00101e16(&local_28,&local_38);
    local_38 = FUN_00101e38(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101d58(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




undefined8 FUN_00103476(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_0010400c(void)

{
  return;
}




undefined8 FUN_00101d0c(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




undefined8 FUN_001041db(undefined8 *param_1)

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




void FUN_00103cb7(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00102264(undefined8 param_1)

{
  return param_1;
}




int FUN_00103f79(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_0010289a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001017a5(void)

{
  FUN_00101667();
  return;
}




void FUN_001021da(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021c8(param_2);
  FUN_00102ad0(param_1,uVar1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




void FUN_00103a88(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed0)();
  return;
}




void FUN_00102b08(undefined8 param_1)

{
  FUN_00103296(param_1);
  return;
}




undefined8 FUN_001036c1(undefined8 param_1)

{
  return param_1;
}




void FUN_00101c04(undefined8 param_1)

{
  FUN_0010207e(param_1);
  return;
}




void FUN_00102efa(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103349(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103349(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103b5e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




long FUN_0010306a(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103412(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103476(param_2);
                    /* try { // try from 001030d9 to 0010316b has its CatchHandler @ 00103197 */
    uVar2 = FUN_0010306a(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_0010348c(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103412(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103476(local_38);
      uVar2 = FUN_0010306a(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_0010348c(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00104017(void)

{
  return;
}




long FUN_001029de(long param_1)

{
  return param_1 + 8;
}




void FUN_00103b08(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001027ee(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00101da1(undefined8 param_1)

{
  return param_1;
}




void FUN_00104038(void)

{
  return;
}




void FUN_001020f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001029de(param_1);
  uVar2 = FUN_00101cae(param_1);
  FUN_001029f4(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_001031d9(undefined8 param_1)

{
  FUN_00101843(param_1);
  return;
}




undefined8 FUN_00102148(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001027ee(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102ce8(undefined8 param_1)

{
  FUN_001026b1(param_1);
  return;
}




undefined8 FUN_00102252(undefined8 param_1)

{
  return param_1;
}




void FUN_0010402d(void)

{
  return;
}




void FUN_00101b78(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00101f7e(param_1,param_2);
  lVar1 = FUN_00101fee(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00102004(param_1);
                    /* try { // try from 00101bd3 to 00101bd7 has its CatchHandler @ 00101bdd */
    uVar3 = FUN_0010201a(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00101c24(void)

{
  return;
}




void FUN_00101f7e(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010280c(param_1,param_2);
  FUN_00102886(param_1,param_2);
  FUN_0010189e(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010352e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102252(param_3);
  uVar1 = FUN_00102264(param_4);
  FUN_00101db4(local_38,uVar1);
  FUN_00102276(param_5);
  uVar1 = FUN_0010181a(0x10,param_2);
                    /* try { // try from 001035b6 to 001035ba has its CatchHandler @ 001035bd */
  FUN_00103670(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




void FUN_0010201a(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010289a(local_18,param_1);
  FUN_001028b8(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102b8e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010181a(0x30,param_2);
  uVar1 = FUN_00102276(param_5);
  uVar2 = FUN_00102264(param_4);
  uVar3 = FUN_00102252(param_3);
  uVar4 = FUN_001021a6(param_2);
  uVar5 = FUN_00103216(param_1);
                    /* try { // try from 00102c1d to 00102c21 has its CatchHandler @ 00102c24 */
  FUN_001032d9(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00101928(undefined8 param_1)

{
  FUN_001019b2(param_1);
  return;
}




undefined4 * FUN_00103412(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102fda(param_2);
  puVar2 = (undefined4 *)FUN_0010361e(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00103ff6(void)

{
  return;
}




ulong FUN_00103d78(long param_1,ulong param_2,long param_3)

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




void FUN_00104022(void)

{
  return;
}




void FUN_00101948(undefined8 param_1)

{
  FUN_00101928(param_1);
  return;
}




undefined8 FUN_001017b5(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103a88("Calling good()...");
  FUN_001017a5();
  FUN_00103a88("Finished good()");
  FUN_00103a88("Calling bad()...");
  FUN_00101529();
  FUN_00103a88("Finished bad()");
  return 0;
}




void FUN_001032ab(undefined8 param_1,undefined8 param_2)

{
  FUN_001034de(param_1,param_2,0);
  return;
}




void FUN_00101988(undefined8 param_1,undefined8 param_2)

{
  FUN_00101b78(param_1,param_2);
  return;
}




undefined8 FUN_00102ffc(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001026b1(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102fda(param_1);
  FUN_00102ffc(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010280c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103012(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103b34(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101db4(undefined8 param_1,undefined8 param_2)

{
  FUN_00102212(param_1,param_2);
  return;
}




undefined8 FUN_00103284(undefined8 param_1)

{
  return param_1;
}




void FUN_00103b89(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_001041b8(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102212(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b08(param_2);
  uVar1 = FUN_00102b26(uVar1);
  FUN_00102b38(param_1,uVar1);
  return;
}




void FUN_00103fca(void)

{
  return;
}




void FUN_00103ae0(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001018c8(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 FUN_001035f9(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_00102f42(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001037d2(undefined8 param_1)

{
  FUN_0010382d(param_1);
  return;
}




undefined8 FUN_00101cae(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_0010181a(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001031f7(undefined8 param_1)

{
  FUN_00101870(param_1);
  return;
}




undefined4 FUN_00101d32(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00102198(param_1);
  return unaff_EBX;
}




void FUN_00103feb(void)

{
  return;
}




undefined8 FUN_00102276(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010208d(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8
FUN_00101e38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00102276(param_5);
  uVar2 = FUN_00102264(param_4);
  uVar3 = FUN_00102252(param_3);
  local_40 = FUN_00102288(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101eb4 to 00101ef7 has its CatchHandler @ 00101f35 */
  uVar1 = FUN_001026b1(local_40);
  local_38 = FUN_00102308(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001020ba(param_1,local_40);
    FUN_001027ee(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102704(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




long FUN_00102ee4(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00103ce5(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102ab2(undefined8 param_1)

{
  FUN_00103284(param_1);
  return;
}




void FUN_00103fb4(void)

{
  return;
}




void FUN_001019ee(undefined8 param_1)

{
  FUN_00101c34(param_1);
  return;
}




long FUN_00101870(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined8 * FUN_00102f6e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001020ba(undefined8 param_1,undefined8 param_2)

{
  FUN_00102960(param_1,param_2);
  FUN_001029a4(param_1,param_2);
  return;
}




void FUN_00103764(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010181a(0x30,param_2);
  uVar1 = FUN_001036c1(param_3);
  uVar2 = FUN_001021a6(param_2);
  uVar3 = FUN_00103216(param_1);
  FUN_001037f0(uVar3,uVar2,uVar1);
  return;
}




void FUN_00103fbf(void)

{
  return;
}




void FUN_001042c0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103252(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034b6(param_1,param_2,param_3);
  return;
}




void FUN_00102b38(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021c8(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_001033ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001035f9(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103349(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_0010285c(undefined8 param_1,undefined8 param_2)

{
  FUN_00103040(param_1,param_2);
  return;
}




undefined8 FUN_00103216(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101dde(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021c8(param_2);
  FUN_001021da(param_1,uVar1);
  return param_1;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101470();
    DAT_00109020 = 1;
    return;
  }
  return;
}




void FUN_001019b2(long param_1)

{
  FUN_00101c04(param_1);
  FUN_00101c24(param_1);
  FUN_0010189e(param_1 + 8);
  return;
}




void FUN_00102198(void)

{
  return;
}




undefined8 FUN_0010360c(undefined8 param_1)

{
  return param_1;
}




void FUN_001034de(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103658(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_00102f9a(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103349(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




ulong FUN_00103e7c(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00103012(undefined8 param_1,undefined8 param_2)

{
  FUN_0010285c(param_1,param_2);
  return param_1;
}




void FUN_00103fe0(void)

{
  return;
}




void FUN_00104254(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103228(undefined8 param_1,undefined8 param_2)

{
  FUN_001034a2(param_1,param_2);
  return;
}




void FUN_00103c64(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010389e(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  byte bVar4;
  undefined4 local_34c;
  ulong local_348;
  undefined8 *local_340;
  undefined8 local_338 [101];
  long local_10;
  
  bVar4 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_34c = 2;
  plVar1 = (long *)FUN_00101a4c(param_1,&local_34c);
  local_340 = (undefined8 *)*plVar1;
  puVar3 = local_338;
  for (lVar2 = 100; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    local_340[local_348] = local_338[local_348];
  }
  FUN_00103b89(*local_340);
  if (local_340 != (undefined8 *)0x0) {
    operator_delete__(local_340);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102d06(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00103349(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00101cee(undefined8 param_1)

{
  FUN_00102148(param_1);
  return;
}




void FUN_00103aae(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001029a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103216(param_1);
  FUN_00103252(uVar1,param_2,1);
  return;
}




void FUN_001032d9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00102276(param_5);
  uVar2 = FUN_00102264(param_4);
  uVar3 = FUN_00102252(param_3);
  FUN_0010352e(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_001036d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102b62(param_1);
  uVar2 = FUN_001036c1(param_2);
  FUN_00103764(param_1,uVar1,uVar2);
  return uVar1;
}




undefined8 FUN_00102b26(undefined8 param_1)

{
  return param_1;
}




void FUN_00101529(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101948(local_88);
                    /* try { // try from 00101564 to 001015ee has its CatchHandler @ 0010163a */
  pvVar1 = operator_new__(400);
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_00101a4c(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101a4c(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101a4c(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_00101988(local_58,local_88);
                    /* try { // try from 001015f6 to 001015fa has its CatchHandler @ 00101625 */
  FUN_0010389e(local_58);
  FUN_00101968(local_58);
  FUN_00101968(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103bb4(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001034b6(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010382d(undefined8 param_1)

{
  FUN_00102b08(param_1);
  return;
}




undefined8 FUN_00102288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102b62(param_1);
  uVar2 = FUN_00102276(param_4);
  uVar3 = FUN_00102264(param_3);
  uVar4 = FUN_00102252(param_2);
  FUN_00102b8e(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00101e16(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




long FUN_00102cd2(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00103c0a(undefined4 param_1)

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




undefined8 FUN_00102d46(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00101cae(param_1);
  local_50 = FUN_001029de(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001026b1(local_58);
    local_59 = FUN_00101d7a(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_0010208d(local_58);
    }
    else {
      local_58 = FUN_001020a3(local_58);
    }
  }
  FUN_001027ee(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_0010335c(param_1);
    cVar1 = FUN_00101d0c(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_001033ac(local_38,&local_58,&local_50);
      goto LAB_00102ec8;
    }
    FUN_00102f42(&local_48);
  }
  uVar2 = FUN_00102ce8(local_48);
  cVar1 = FUN_00101d7a(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102f9a(local_38,&local_48,&local_40);
  }
  else {
    FUN_001033ac(local_38,&local_58,&local_50);
  }
LAB_00102ec8:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102886(void)

{
  return;
}




void FUN_00102b62(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103216(param_1);
  FUN_001032ab(uVar1,1);
  return;
}




void FUN_00101667(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101948(local_88);
                    /* try { // try from 001016a2 to 0010172c has its CatchHandler @ 00101778 */
  pvVar1 = operator_new__(800);
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_00101a4c(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101a4c(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101a4c(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_00101988(local_58,local_88);
                    /* try { // try from 00101734 to 00101738 has its CatchHandler @ 00101763 */
  FUN_00103993(local_58);
  FUN_00101968(local_58);
  FUN_00101968(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a0e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101cae(param_1);
  FUN_00101c44(param_1,uVar1);
  FUN_00101908(param_1);
  return;
}




void FUN_00103fa9(void)

{
  return;
}




undefined4 FUN_00101d7a(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_0010361e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_001036c1(param_2);
  FUN_001036d4(uVar1,uVar2);
  return;
}




void FUN_00104043(void)

{
  return;
}




void FUN_001037f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001036c1(param_3);
  FUN_0010384c(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00101fee(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00104292(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103993(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  byte bVar4;
  undefined4 local_34c;
  ulong local_348;
  undefined8 *local_340;
  undefined8 local_338 [101];
  long local_10;
  
  bVar4 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_34c = 2;
  plVar1 = (long *)FUN_00101a4c(param_1,&local_34c);
  local_340 = (undefined8 *)*plVar1;
  puVar3 = local_338;
  for (lVar2 = 100; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    local_340[local_348] = local_338[local_348];
  }
  FUN_00103b89(*local_340);
  if (local_340 != (undefined8 *)0x0) {
    operator_delete__(local_340);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103c8c(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_001020a3(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00101830(void)

{
  return;
}




void FUN_00102ad0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021c8(param_2);
  FUN_00102b38(param_1,uVar1);
  return;
}




bool FUN_0010415d(pthread_t *param_1)

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




undefined8 FUN_00103658(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_001033f4(undefined8 param_1)

{
  FUN_0010360c(param_1);
  return;
}




undefined8 FUN_00103296(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00103f5b(void)

{
  return 1;
}




undefined8 FUN_001029f4(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_001026b1(local_38);
    cVar1 = FUN_00101d7a(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_0010208d(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001020a3(local_38);
    }
  }
  FUN_001027ee(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_0010335c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001027ee(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102cbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00102960(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001021a6(param_2);
  uVar2 = FUN_00103216(param_1);
  FUN_00103228(uVar2,uVar1);
  return;
}




void FUN_0010207e(void)

{
  return;
}




void FUN_00104273(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00103054(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103720(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001037d2(param_2);
  puVar2 = (undefined4 *)FUN_00102b26(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




undefined8 FUN_00103349(undefined8 param_1)

{
  return param_1;
}




void FUN_001034a2(void)

{
  return;
}




void FUN_00101d58(undefined8 *param_1)

{
  FUN_001021a6(*param_1);
  return;
}




void FUN_00104059(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010384c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_001036c1(param_3);
  puVar3 = (undefined8 *)FUN_0010181a(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




undefined8 FUN_0010348c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00102308(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102c6c(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_001029de(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102ce8(local_50);
    cVar2 = FUN_00101d7a(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102ce8(local_50);
      cVar2 = FUN_00101d7a(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102f9a(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102cd2(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102cd2(local_60);
          local_48[1] = 0;
          FUN_00102d06(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102f6e(local_48);
          uVar6 = FUN_00102ce8(*puVar5);
          cVar2 = FUN_00101d7a(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102d46(local_60,param_3);
          }
          else {
            lVar3 = FUN_0010208d(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102d06(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102efa(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102ee4(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102ee4(local_60);
        uVar6 = FUN_00102ee4(local_60);
        FUN_00102efa(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102f42(local_48);
        uVar6 = FUN_00102ce8(*puVar5);
        cVar2 = FUN_00101d7a(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102d46(local_60,param_3);
        }
        else {
          lVar3 = FUN_0010208d(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102d06(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102efa(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00102696;
  }
  lVar3 = FUN_00102cbc(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_001023aa:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102cd2(local_60);
    uVar6 = FUN_00102ce8(*puVar5);
    cVar2 = FUN_00101d7a(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_001023aa;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102cd2(local_60);
    local_48[1] = 0;
    FUN_00102d06(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102d46(local_60,param_3);
  }
LAB_00102696:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




long FUN_00101843(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_001028b8(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_001029de(param_1);
  uVar2 = FUN_00103054(param_2);
  uVar1 = FUN_0010306a(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102ee4(param_1);
  uVar2 = FUN_001031d9(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102cd2(param_1);
  uVar2 = FUN_001031f7(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00102fda(long param_1)

{
  FUN_001033f4(param_1 + 0x20);
  return;
}




void FUN_0010404e(void)

{
  return;
}




void FUN_00101908(undefined8 param_1)

{
  FUN_001019ee(param_1);
  return;
}



