
undefined8 FUN_00101fda(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022b2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101754(undefined8 *param_1)

{
  FUN_00101794(*param_1);
  return;
}




void FUN_00101c42(undefined8 param_1)

{
  FUN_00101cae(param_1);
  return;
}




void FUN_001023f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102557(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00101cae(undefined8 param_1)

{
  FUN_00101e10(param_1);
  FUN_00101be2(param_1);
  return;
}




undefined8 FUN_00102b17(void)

{
  return 1;
}




undefined8 FUN_001020ff(undefined8 param_1)

{
  return param_1;
}




void FUN_00102bbd(void)

{
  return;
}




undefined8 FUN_00102d74(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102234(undefined8 param_1,undefined8 param_2)

{
  FUN_001024cc(param_1,param_2);
  return;
}




void FUN_00102bde(void)

{
  return;
}




void FUN_00101686(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_001016e4(param_1);
  FUN_00101730(&local_18);
  FUN_00101754(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102820(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010246d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020ff(param_3);
  FUN_0010256a(param_1,param_2,uVar1);
  return;
}




void FUN_0010231a(undefined8 *param_1)

{
  FUN_001024e0(*param_1);
  return;
}




void FUN_0010242e(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_0010239d(*param_1,param_1[1],1);
  }
  return;
}




void FUN_001019ec(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c22(local_58);
  local_5c = 0xffffffff;
                    /* try { // try from 00101a35 to 00101a85 has its CatchHandler @ 00101ad1 */
  __isoc99_fscanf(stdin,&DAT_00103055,&local_5c);
  FUN_00101cda(local_58,&local_5c);
  FUN_00101cda(local_58,&local_5c);
  FUN_00101cda(local_58,&local_5c);
  FUN_00101d14(local_38,local_58);
                    /* try { // try from 00101a8d to 00101a91 has its CatchHandler @ 00101abc */
  FUN_001015cb(local_38);
  FUN_00101c42(local_38);
  FUN_00101c42(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102b9c(void)

{
  return;
}




void FUN_00102b70(void)

{
  return;
}




void FUN_0010238a(void)

{
  return;
}




void FUN_0010256a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_001020ff(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101b75(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102c15(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102084(void)

{
  return;
}




void FUN_00102b91(void)

{
  return;
}




undefined8 FUN_00101eef(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102206(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




ulong FUN_00102934(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030e4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102e4e(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001027c6(undefined4 param_1)

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




void FUN_00101afb(void)

{
  FUN_001018f5();
  FUN_001019ec();
  return;
}




void FUN_00102848(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102ef0(void)

{
  return;
}




void FUN_0010266a(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001026c4(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001028a1(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101404) */
/* WARNING: Removing unreachable block (ram,0x00101410) */

void FUN_001013e0(void)

{
  return;
}




undefined8 FUN_00101f40(undefined8 param_1)

{
  return param_1;
}




long * FUN_00101730(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




undefined8 FUN_00101b75(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001025ca(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010262c(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00102ba7(void)

{
  return;
}




void FUN_0010239d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102502(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101b10(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102644("Calling good()...");
  FUN_00101afb();
  FUN_00102644("Finished good()");
  FUN_00102644("Calling bad()...");
  FUN_001017e6();
  FUN_00102644("Finished bad()");
  return 0;
}




void FUN_00101e8e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_001020ff(param_3);
  p_Var2 = (_List_node_base *)FUN_00102112(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_001021dc(param_1,1);
  return;
}




void FUN_00102be9(void)

{
  return;
}




void FUN_00101cda(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001016e4(param_1);
  FUN_00101e8e(param_1,uVar1,param_2);
  return;
}




long FUN_001024aa(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00101c22(undefined8 param_1)

{
  FUN_00101c02(param_1);
  return;
}




void FUN_001028d4(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101c02(undefined8 param_1)

{
  FUN_00101c62(param_1);
  return;
}




void FUN_00101be2(undefined8 param_1)

{
  FUN_00101c8e(param_1);
  return;
}




void FUN_00101c8e(undefined8 param_1)

{
  FUN_00101e00(param_1);
  return;
}




void FUN_001015cb(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  long in_FS_OFFSET;
  int local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = (int *)FUN_00101686(param_1);
  iVar1 = *piVar2;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_00102644("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)iVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_0010269c(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001017b6(undefined8 param_1)

{
  FUN_001017d4(param_1);
  return;
}




void FUN_00101469(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  int local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  piVar1 = (int *)FUN_00101686(param_1);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (*piVar1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)*piVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_0010269c(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_00102644("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102bff(void)

{
  return;
}




undefined8 FUN_0010262c(void)

{
  return 0x555555555555555;
}




undefined8 FUN_00102b26(void)

{
  return 0;
}




void FUN_001023d0(undefined8 param_1)

{
  FUN_00102529(param_1,1);
  return;
}




void FUN_00102770(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101794(long param_1)

{
  FUN_001017b6(param_1 + 0x10);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c3) */
/* WARNING: Removing unreachable block (ram,0x001013cf) */

void FUN_001013b0(void)

{
  return;
}




undefined8 FUN_001016e4(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101776(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101de0(undefined8 param_1)

{
  FUN_00102084(param_1);
  return;
}




void FUN_00101e00(void)

{
  return;
}




void FUN_00101b8c(undefined8 param_1)

{
  FUN_00101bac(param_1);
  return;
}




undefined8 FUN_00101f8a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022b2(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102bf4(void)

{
  return;
}




void FUN_00102b5a(void)

{
  return;
}




void FUN_00102c0a(void)

{
  return;
}




undefined8 FUN_00102094(undefined8 param_1)

{
  return param_1;
}




void FUN_00102873(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_0010151a(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  int local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  piVar1 = (int *)FUN_00101686(param_1);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (*piVar1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)*piVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_0010269c(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_00102644("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101f52(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010225e(param_2);
  FUN_00102270(param_1,uVar1);
  return;
}




void FUN_001022b2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102e80(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 * FUN_001022f6(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




undefined8 FUN_00102206(undefined8 param_1,undefined8 param_2)

{
  FUN_00102234(param_1,param_2);
  return param_1;
}




void FUN_00102bd3(void)

{
  return;
}




void FUN_00102502(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102e10(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102270(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010225e(param_2);
  FUN_00102234(param_1,uVar1);
  FUN_00101b8c(param_1);
  return;
}




void FUN_00102644(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102b65(void)

{
  return;
}




undefined8 FUN_001017d4(undefined8 param_1)

{
  return param_1;
}




void FUN_001020d0(undefined8 param_1,undefined8 param_2)

{
  FUN_0010239d(param_1,param_2,1);
  return;
}




void FUN_001021dc(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




undefined8 FUN_00102557(undefined8 param_1)

{
  return param_1;
}




void FUN_0010279b(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




bool FUN_00102d19(pthread_t *param_1)

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




undefined8 FUN_00102c4c(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102c15,local_18);
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




undefined8 FUN_00102d97(undefined8 *param_1)

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




void FUN_0010271a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_00102a38(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030ec,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101776(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102529(undefined8 param_1,undefined8 param_2)

{
  FUN_001025ca(param_1,param_2,0);
  return;
}




void FUN_001024e0(long param_1)

{
  FUN_001025ac(param_1 + 0x10);
  return;
}




void FUN_00101d14(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101f40(param_2);
  FUN_00101eef(&local_21,uVar1);
  FUN_00101f52(param_1,&local_21);
  FUN_00101c8e(&local_21);
  uVar1 = FUN_00101fda(param_2);
  uVar2 = FUN_00101f8a(param_2);
                    /* try { // try from 00101da0 to 00101da4 has its CatchHandler @ 00101da7 */
  FUN_00102026(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101e10(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101794(local_20);
    uVar3 = FUN_00102094(param_1);
    FUN_001020a6(uVar3,uVar2);
    FUN_001020d0(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




int FUN_00102b35(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001026f0(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001017e6(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c22(local_58);
  local_5c = 0xffffffff;
                    /* try { // try from 0010182f to 0010187f has its CatchHandler @ 001018cb */
  __isoc99_fscanf(stdin,&DAT_00103055,&local_5c);
  FUN_00101cda(local_58,&local_5c);
  FUN_00101cda(local_58,&local_5c);
  FUN_00101cda(local_58,&local_5c);
  FUN_00101d14(local_38,local_58);
                    /* try { // try from 00101887 to 0010188b has its CatchHandler @ 001018b6 */
  FUN_00101469(local_38);
  FUN_00101c42(local_38);
  FUN_00101c42(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101c62(undefined8 param_1)

{
  FUN_00101de0(param_1);
  FUN_00101b8c(param_1);
  return;
}




void FUN_0010233c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001020ff(param_2);
  uVar2 = FUN_001016e4(param_1);
  FUN_00101e8e(param_1,uVar2,uVar1);
  return;
}




void FUN_001024cc(void)

{
  return;
}




undefined8 FUN_0010225e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010261a(undefined8 param_1)

{
  return param_1;
}




void FUN_00102bc8(void)

{
  return;
}




void FUN_001018f5(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c22(local_58);
  local_5c = 7;
                    /* try { // try from 00101939 to 00101976 has its CatchHandler @ 001019c2 */
  FUN_00101cda(local_58,&local_5c);
  FUN_00101cda(local_58,&local_5c);
  FUN_00101cda(local_58,&local_5c);
  FUN_00101d14(local_38,local_58);
                    /* try { // try from 0010197e to 00101982 has its CatchHandler @ 001019ad */
  FUN_0010151a(local_38);
  FUN_00101c42(local_38);
  FUN_00101c42(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001025ac(undefined8 param_1)

{
  FUN_0010261a(param_1);
  return;
}




void FUN_0010269c(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102b4f(void)

{
  return;
}




void FUN_00102bb2(void)

{
  return;
}




void FUN_00102745(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101bac(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void _FINI_0(void)

{
  if (DAT_00106028 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001013b0();
    DAT_00106028 = 1;
    return;
  }
  return;
}




undefined8 FUN_001022d0(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f00)();
  return;
}




void FUN_00102026(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  while( true ) {
    cVar1 = FUN_001022d0(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010231a(&local_18);
    FUN_0010233c(local_10,uVar2);
    FUN_001022f6(&local_18);
  }
  return;
}




void FUN_001020a6(undefined8 param_1,undefined8 param_2)

{
  FUN_0010238a(param_1,param_2);
  return;
}




undefined8 FUN_00102112(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001023d0(param_1);
  uVar2 = FUN_00102094(param_1);
  FUN_001023f4(local_38,uVar2,uVar1);
  uVar3 = FUN_001020ff(param_2);
  uVar4 = FUN_00101794(uVar1);
  FUN_0010246d(uVar2,uVar4,uVar3);
  FUN_001024aa(local_38,0);
  FUN_0010242e(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102b86(void)

{
  return;
}




void FUN_00102b7b(void)

{
  return;
}




void FUN_00102e2f(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}



