
void FUN_00103236(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001033e0(param_2);
  uVar2 = FUN_001033e0(param_1);
  FUN_001033f2(uVar2,uVar1,param_3);
  return;
}




undefined8 * FUN_001034b0(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  long local_18;
  
  uVar1 = *param_3;
  local_20 = param_1;
  for (local_18 = param_2; local_18 != 0; local_18 = local_18 + -1) {
    *local_20 = uVar1;
    local_20 = local_20 + 1;
  }
  return local_20;
}




void FUN_00103c84(void)

{
  return;
}




void FUN_001036f5(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103551(param_2);
  uVar2 = FUN_00103551(param_1);
  FUN_00103577(uVar2,uVar1,param_3);
  return;
}




void FUN_00102c6c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102b50(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00102fa1(undefined8 param_1,undefined8 param_2)

{
  FUN_001031f0(param_1,param_2,0);
  return;
}




undefined8 FUN_00102d4c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103bd7(void)

{
  return 0;
}




void FUN_00101d28(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010263e(param_2);
  FUN_001025ed(&local_31,uVar1);
  uVar1 = FUN_001025c6(param_2);
                    /* try { // try from 00101d8e to 00101d92 has its CatchHandler @ 00101dfb */
  FUN_00102650(param_1,uVar1,&local_31);
  FUN_00101b2a(&local_31);
  uVar2 = FUN_00101ee4(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_0010270e(param_2);
  uVar4 = FUN_001026b6(param_2);
                    /* try { // try from 00101ddc to 00101de0 has its CatchHandler @ 00101e19 */
  uVar1 = FUN_00102766(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101e9a(void)

{
  return;
}




void FUN_00102f4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010263e(param_1);
  FUN_00103187(uVar1);
  return;
}




void FUN_00101b9c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ee4(param_1);
  FUN_00101ef6(*param_1,param_1[1],uVar1);
  FUN_00101b4a(param_1);
  return;
}




long FUN_00101faf(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0010282a(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_0010282a(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00102f16(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103156(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102e46(undefined8 param_1)

{
  return param_1;
}




void FUN_0010301c(void)

{
  return;
}




void FUN_00103577(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102ec6(param_3);
  uVar2 = FUN_00102ec6(local_28);
  uVar3 = FUN_00102ec6(local_20);
  uVar1 = FUN_0010365d(uVar3,uVar2,uVar1);
  FUN_00103140(&local_30,uVar1);
  return;
}




void FUN_001037cb(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_00102a60(undefined8 param_1,ulong param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_30;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  local_40 = param_1;
  lVar1 = FUN_00102f4c(param_1);
  lVar2 = FUN_001025c6(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_001025c6(local_40);
  local_30 = FUN_001025c6(local_40);
  plVar3 = (long *)FUN_00102f72(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_001025c6(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102f4c(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102f4c(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00102560(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101f24(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001034fb(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_0010282a(&local_10);
  return *puVar1;
}




undefined8 FUN_00101a22(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001036f5("Calling good()...");
  FUN_00101a12();
  FUN_001036f5("Finished good()");
  FUN_001036f5("Calling bad()...");
  FUN_001016da();
  FUN_001036f5("Finished bad()");
  return 0;
}




void FUN_00102932(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102dc5(param_2);
  uVar2 = FUN_00102dc5(param_1);
  FUN_00102e11(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_0010289c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d36(param_1);
  FUN_00102d9b(*param_1,uVar1);
  return;
}




undefined8 FUN_00101f46(undefined8 param_1)

{
  return param_1;
}




void FUN_00103952(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00102ec6(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c37(void)

{
  return;
}




void FUN_00103c9a(void)

{
  return;
}




undefined8 FUN_001025ed(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102bdf(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103877(undefined4 param_1)

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




void FUN_0010371b(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001030b8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_001033c8(void)

{
  return 0xfffffffffffffff;
}




void FUN_00103ca5(void)

{
  return;
}




undefined8 FUN_001033e0(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c0b(void)

{
  return;
}




void FUN_00103551(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103648(&local_10);
  FUN_00102e46(uVar1);
  return;
}




void FUN_00102e58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102ec6(param_3);
  uVar2 = FUN_00102ec6(local_28);
  uVar3 = FUN_00102ec6(local_20);
  uVar1 = FUN_0010310b(uVar3,uVar2,uVar1);
  FUN_00103140(&local_30,uVar1);
  return;
}




void FUN_00102ed8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00101ef6(undefined8 param_1,undefined8 param_2)

{
  FUN_001027dd(param_1,param_2);
  return;
}




undefined8 FUN_00103187(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_0010337b(param_1);
  puVar1 = (undefined8 *)FUN_00103399(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




long FUN_001028ee(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101f46(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101f46(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00101ade(undefined8 param_1)

{
  FUN_00101abe(param_1);
  return;
}




void FUN_00103286(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103460(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103bc8(void)

{
  return 1;
}




void FUN_00102d23(void)

{
  return;
}




long FUN_00102d36(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00102b50(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102fa1(param_1,param_2);
  }
  return uVar1;
}




undefined8 FUN_00103e48(undefined8 *param_1)

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




void FUN_00102d5e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d4c(param_3);
  FUN_00103060(param_1,param_2,uVar1);
  return;
}




void FUN_00103c6e(void)

{
  return;
}




void * FUN_00103692(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




undefined8 FUN_00101a87(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010374d(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001027dd(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d23(param_1,param_2);
  return;
}




void FUN_001030d6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103286(param_1,param_2,param_3);
  return;
}




bool FUN_00103dca(pthread_t *param_1)

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




void FUN_001028d0(undefined8 param_1)

{
  FUN_00102d36(param_1);
  return;
}




void FUN_0010351c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001035e5(param_1,param_2,param_3);
  return;
}




void FUN_00102cc6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010302f(param_1,param_2,param_3);
  return;
}




void FUN_00103c42(void)

{
  return;
}




ulong * FUN_00102f72(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102b87(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102fcf(param_2);
  uVar2 = FUN_00102fcf(param_1);
  FUN_00102e11(uVar2,uVar1,param_3,param_4);
  return;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101490();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_00103cb0(void)

{
  return;
}




void FUN_00101b4a(long *param_1)

{
  FUN_00101eaa(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101a9e(param_1);
  return;
}




void FUN_0010302f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103236(param_1,param_2,param_3);
  return;
}




void * FUN_001035e5(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_0010332d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102ec6(param_1);
  uVar1 = FUN_001034b0(uVar1,param_2,param_3);
  FUN_00103140(&local_10,uVar1);
  return;
}




void FUN_00103156(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010332d(param_1,param_2,param_3);
  return;
}




void FUN_00103c2c(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x001014af) */

void FUN_00101490(void)

{
  return;
}




void FUN_00101876(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ade(local_58);
                    /* try { // try from 001018a3 to 0010199c has its CatchHandler @ 001019e8 */
  local_68 = operator_new__(100);
  memset(local_68,0x41,0x31);
  *(undefined *)((long)local_68 + 0x31) = 0;
  local_60 = FUN_00101be4(local_58);
  FUN_00101c34(local_38,&local_60);
  FUN_00101c62(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101be4(local_58);
  FUN_00101c34(local_38,&local_60);
  FUN_00101c62(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101be4(local_58);
  FUN_00101c34(local_38,&local_60);
  FUN_00101c62(local_58,local_38[0],1,&local_68);
  FUN_00101d28(local_38,local_58);
                    /* try { // try from 001019a4 to 001019a8 has its CatchHandler @ 001019d3 */
  FUN_001015ff(local_38);
  FUN_00101b9c(local_38);
  FUN_00101b9c(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001038f9(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101b2a(undefined8 param_1)

{
  FUN_00101e9a(param_1);
  return;
}




undefined8 FUN_00102dc5(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030b8(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102514(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f24(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102c36(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c0c(param_1,param_2);
  FUN_00101e68(param_1);
  return;
}




void FUN_00103c4d(void)

{
  return;
}




ulong * FUN_00103399(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_001016da(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ade(local_58);
                    /* try { // try from 00101707 to 00101800 has its CatchHandler @ 0010184c */
  local_68 = operator_new__(100);
  memset(local_68,0x41,99);
  *(undefined *)((long)local_68 + 99) = 0;
  local_60 = FUN_00101be4(local_58);
  FUN_00101c34(local_38,&local_60);
  FUN_00101c62(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101be4(local_58);
  FUN_00101c34(local_38,&local_60);
  FUN_00101c62(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101be4(local_58);
  FUN_00101c34(local_38,&local_60);
  FUN_00101c62(local_58,local_38[0],1,&local_68);
  FUN_00101d28(local_38,local_58);
                    /* try { // try from 00101808 to 0010180c has its CatchHandler @ 00101837 */
  FUN_00101549(local_38);
  FUN_00101b9c(local_38);
  FUN_00101b9c(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101be4(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f24(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_001039e5(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103cfd(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103cc6,local_18);
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




void FUN_00103f30(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103775(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103cbb(void)

{
  return;
}




void FUN_0010310b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032b7(param_1,param_2,param_3);
  return;
}




void FUN_0010298a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e46(param_2);
  uVar2 = FUN_00102e46(param_1);
  FUN_00102e58(uVar2,uVar1,param_3);
  return;
}




void FUN_00102d9b(undefined8 param_1,undefined8 param_2)

{
  FUN_001030a4(param_1,param_2);
  return;
}




void FUN_001033f2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102ec6(param_3);
  uVar2 = FUN_001034fb(local_28);
  uVar3 = FUN_001034fb(local_20);
  uVar1 = FUN_0010351c(uVar3,uVar2,uVar1);
  FUN_00103140(&local_30,uVar1);
  return;
}




void FUN_00101abe(undefined8 param_1)

{
  FUN_00101afe(param_1);
  return;
}




void FUN_00102650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c36(param_1,param_3);
                    /* try { // try from 0010268a to 0010268e has its CatchHandler @ 00102691 */
  FUN_00102c6c(param_1,param_2);
  return;
}




void FUN_00103c58(void)

{
  return;
}




void FUN_00103c79(void)

{
  return;
}




void FUN_00103cc6(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_0010263e(undefined8 param_1)

{
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ec8)();
  return;
}




void FUN_00103c16(void)

{
  return;
}




void FUN_00101549(undefined8 param_1)

{
  char *__src;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001016b6(param_1,2);
  __src = (char *)*puVar1;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  local_48[0x20] = '\0';
  local_48[0x21] = '\0';
  local_48[0x22] = '\0';
  local_48[0x23] = '\0';
  local_48[0x24] = '\0';
  local_48[0x25] = '\0';
  local_48[0x26] = '\0';
  local_48[0x27] = '\0';
  local_48[0x28] = '\0';
  local_48[0x29] = '\0';
  local_48[0x2a] = '\0';
  local_48[0x2b] = '\0';
  local_48[0x2c] = '\0';
  local_48[0x2d] = '\0';
  local_48[0x2e] = '\0';
  local_48[0x2f] = '\0';
  local_48[0x30] = '\0';
  local_48[0x31] = '\0';
  strcat(local_48,__src);
  FUN_001036f5(__src);
  if (__src != (char *)0x0) {
    operator_delete__(__src);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102fcf(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030b8(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010283c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102d4c(param_3);
  uVar2 = FUN_00102d36(param_1);
  FUN_00102d5e(*param_1,uVar2,uVar1);
  return;
}




void FUN_0010384c(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103ec1(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103985(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102766(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cc6(param_1,param_2,param_3);
  return;
}




void FUN_001029da(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102ec6(param_2);
  uVar2 = FUN_00102ec6(param_1);
  FUN_00102ed8(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00103648(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00103140(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103c00(void)

{
  return;
}




void FUN_0010279c(void)

{
  return;
}




void FUN_00103c21(void)

{
  return;
}




void FUN_001037a1(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




ulong FUN_00103ae9(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102a2b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f16(param_1,param_2,param_3);
  return;
}




void FUN_00102e11(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030d6(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010282a(undefined8 param_1)

{
  return param_1;
}




void FUN_001030a4(void)

{
  return;
}




void FUN_001031f0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001033c8(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_001027ab(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cfc(param_1,param_2,param_3);
  return;
}




void FUN_0010337b(undefined8 param_1)

{
  FUN_001033c8(param_1);
  return;
}




void FUN_00101a12(void)

{
  FUN_00101876();
  return;
}




void FUN_00101afe(undefined8 param_1)

{
  FUN_00101e48(param_1);
  FUN_00101e68(param_1);
  return;
}




undefined8 FUN_00102bdf(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c0c(param_1,param_2);
  return param_1;
}




void FUN_00103924(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001015ff(undefined8 param_1)

{
  char *__src;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001016b6(param_1,2);
  __src = (char *)*puVar1;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  local_48[0x20] = '\0';
  local_48[0x21] = '\0';
  local_48[0x22] = '\0';
  local_48[0x23] = '\0';
  local_48[0x24] = '\0';
  local_48[0x25] = '\0';
  local_48[0x26] = '\0';
  local_48[0x27] = '\0';
  local_48[0x28] = '\0';
  local_48[0x29] = '\0';
  local_48[0x2a] = '\0';
  local_48[0x2b] = '\0';
  local_48[0x2c] = '\0';
  local_48[0x2d] = '\0';
  local_48[0x2e] = '\0';
  local_48[0x2f] = '\0';
  local_48[0x30] = '\0';
  local_48[0x31] = '\0';
  strcat(local_48,__src);
  FUN_001036f5(__src);
  if (__src != (char *)0x0) {
    operator_delete__(__src);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010270e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102808(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101a9e(undefined8 param_1)

{
  FUN_00101b2a(param_1);
  return;
}




void FUN_00103fa0(void)

{
  return;
}




undefined8 FUN_00103e25(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001038d1(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103eff(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




int FUN_00103be6(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101ff4(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_2;
  local_80 = param_1;
  if (param_3 != 0) {
    if ((ulong)(param_1[2] - param_1[1] >> 3) < param_3) {
      local_68 = FUN_00102a60(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102514(local_80);
      local_60 = FUN_001028ee(&local_88,&local_78);
      local_70 = FUN_00102b50(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101ee4(local_80);
                    /* try { // try from 001022fe to 00102389 has its CatchHandler @ 00102441 */
      FUN_00102a2b(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101ee4(local_80);
      puVar2 = (undefined8 *)FUN_00101f46(&local_88);
      local_70 = FUN_00102b87(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101ee4(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101f46(&local_88);
      local_70 = FUN_00102b87(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101ee4(local_80);
      FUN_00101ef6(*local_80,local_80[1],uVar1);
      FUN_00101eaa(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_0010283c(local_38,param_1,param_4);
                    /* try { // try from 0010207e to 00102251 has its CatchHandler @ 00102423 */
      local_50 = FUN_001028d0(local_38);
      local_78 = FUN_00101be4(local_80);
      local_48 = FUN_001028ee(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101ee4(local_80);
        FUN_00102932(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101f46(&local_88);
        FUN_0010298a(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101f46(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101f46(&local_88);
        FUN_001029da(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101ee4(local_80);
        lVar4 = FUN_00102a2b(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101ee4(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101f46(&local_88);
        FUN_00102932(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101f46(&local_88);
        FUN_001029da(*puVar2,local_40,local_50);
      }
      FUN_0010289c(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_001025c6(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




undefined8 FUN_001026b6(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102808(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_001016b6(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00103821(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




long FUN_001032b7(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_00101e48(undefined8 param_1)

{
  FUN_0010279c(param_1);
  return;
}




void FUN_00103c8f(void)

{
  return;
}




void FUN_00101c62(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2;
  local_30 = param_1;
  local_20 = FUN_00101f58(param_1);
  local_18 = FUN_00101faf(&local_38,&local_20);
  local_20 = FUN_00102514(local_30);
  uVar1 = FUN_00102560(&local_20,local_18);
  FUN_00101ff4(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102514(local_30);
  FUN_00102560(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101f24(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103ee0(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103060(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102d4c(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a87(8,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_00101ee4(undefined8 param_1)

{
  return param_1;
}




void FUN_00101c34(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101f46(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_0010365d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103692(param_1,param_2,param_3);
  return;
}




void FUN_00101eaa(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_001027ab(param_1,param_2,param_3);
  }
  return;
}




void FUN_00102c0c(undefined8 param_1,undefined8 param_2)

{
  FUN_0010301c(param_1,param_2);
  return;
}




void FUN_00102808(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00101e68(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_001037f6(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103c63(void)

{
  return;
}




undefined8 FUN_00101f58(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102808(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102cfc(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}



