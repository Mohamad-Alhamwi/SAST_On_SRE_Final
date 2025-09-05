
void FUN_00102c89(void)

{
  return;
}




void FUN_00101d38(undefined8 param_1)

{
  FUN_00101e9a(param_1);
  FUN_00101c6c(param_1);
  return;
}




void FUN_00102c94(void)

{
  return;
}




void FUN_0010210e(void)

{
  return;
}




void FUN_0010233c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102654(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001026b6(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001026ce(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010215a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102427(param_1,param_2,1);
  return;
}




void FUN_00102636(undefined8 param_1)

{
  FUN_001026a4(param_1);
  return;
}




void FUN_00102c73(void)

{
  return;
}




void FUN_0010258c(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00101c36(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00102bfa(void)

{
  return;
}




void FUN_00102c05(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef8)();
  return;
}




void FUN_00102c10(void)

{
  return;
}




undefined8 FUN_00102014(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010233c(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101f18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00102189(param_3);
  p_Var2 = (_List_node_base *)FUN_0010219c(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00102266(param_1,1);
  return;
}




void FUN_001016a6(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101704(param_1);
  FUN_00101750(&local_18);
  FUN_00101774(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001022be(undefined8 param_1,undefined8 param_2)

{
  FUN_00102556(param_1,param_2);
  return;
}




void FUN_00101fdc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022e8(param_2);
  FUN_001022fa(param_1,uVar1);
  return;
}




void FUN_00101cec(undefined8 param_1)

{
  FUN_00101e6a(param_1);
  FUN_00101c16(param_1);
  return;
}




void FUN_001023c6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102189(param_2);
  uVar2 = FUN_00101704(param_1);
  FUN_00101f18(param_1,uVar2,uVar1);
  return;
}




void FUN_00101c16(undefined8 param_1)

{
  FUN_00101c36(param_1);
  return;
}




void FUN_00101c6c(undefined8 param_1)

{
  FUN_00101d18(param_1);
  return;
}




void FUN_001025f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00102189(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101bff(4,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_001026a4(undefined8 param_1)

{
  return param_1;
}




void FUN_00102427(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010258c(param_1,param_2,param_3);
  return;
}




void FUN_001017d6(undefined8 param_1)

{
  FUN_001017f4(param_1);
  return;
}




void FUN_00101806(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  int local_6c;
  undefined local_68 [32];
  undefined local_48 [26];
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101cac(local_68);
  local_6c = -1;
  local_2e[0] = '\0';
  local_2e[1] = '\0';
  local_2e[2] = '\0';
  local_2e[3] = '\0';
  local_2e[4] = '\0';
  local_2e[5] = '\0';
  local_2e[6] = '\0';
  local_2e[7] = '\0';
  local_2e[8] = '\0';
  local_2e[9] = '\0';
  local_2e[10] = '\0';
  local_2e[0xb] = '\0';
  local_2e[0xc] = '\0';
  local_2e[0xd] = '\0';
                    /* try { // try from 0010185d to 001018d4 has its CatchHandler @ 00101920 */
  pcVar1 = fgets(local_2e,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_001026ce("fgets() failed.");
  }
  else {
    local_6c = atoi(local_2e);
  }
  FUN_00101d64(local_68,&local_6c);
  FUN_00101d64(local_68,&local_6c);
  FUN_00101d64(local_68,&local_6c);
  FUN_00101d9e(local_48,local_68);
                    /* try { // try from 001018dc to 001018e0 has its CatchHandler @ 0010190b */
  FUN_00101489(local_48);
  FUN_00101ccc(local_48);
  FUN_00101ccc(local_68);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101cac(undefined8 param_1)

{
  FUN_00101c8c(param_1);
  return;
}




void FUN_0010295e(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102c47(void)

{
  return;
}




void FUN_00102eb9(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001028d2(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010245a(undefined8 param_1)

{
  FUN_001025b3(param_1,1);
  return;
}




void FUN_0010277a(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




long * FUN_00101750(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_0010274e(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102064(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010233c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_001029be(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030f0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102ba1(void)

{
  return 1;
}




void FUN_00102556(void)

{
  return;
}




undefined8 FUN_00102189(undefined8 param_1)

{
  return param_1;
}




long FUN_00102534(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102c31(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e3) */
/* WARNING: Removing unreachable block (ram,0x001013ef) */

void FUN_001013d0(void)

{
  return;
}




void FUN_00102c26(void)

{
  return;
}




void FUN_00101ccc(undefined8 param_1)

{
  FUN_00101d38(param_1);
  return;
}




void FUN_001027cf(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102ed8(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010256a(long param_1)

{
  FUN_00102636(param_1 + 0x10);
  return;
}




void FUN_00102266(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00101796(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101d64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101704(param_1);
  FUN_00101f18(param_1,uVar1,param_2);
  return;
}




void FUN_00102e9a(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102c9f(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00101b9a(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001026ce("Calling good()...");
  FUN_00101b85();
  FUN_001026ce("Finished good()");
  FUN_001026ce("Calling bad()...");
  FUN_00101806();
  FUN_001026ce("Finished bad()");
  return 0;
}




void FUN_001025b3(undefined8 param_1,undefined8 param_2)

{
  FUN_00102654(param_1,param_2,0);
  return;
}




undefined8 FUN_00102e21(undefined8 *param_1)

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




void FUN_001027a4(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_0010219c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010245a(param_1);
  uVar2 = FUN_0010211e(param_1);
  FUN_0010247e(local_38,uVar2,uVar1);
  uVar3 = FUN_00102189(param_2);
  uVar4 = FUN_001017b4(uVar1);
  FUN_001024f7(uVar2,uVar4,uVar3);
  FUN_00102534(local_38,0);
  FUN_001024b8(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102c3c(void)

{
  return;
}




void FUN_00101e8a(void)

{
  return;
}




undefined8 FUN_00102290(undefined8 param_1,undefined8 param_2)

{
  FUN_001022be(param_1,param_2);
  return param_1;
}




void FUN_00101c8c(undefined8 param_1)

{
  FUN_00101cec(param_1);
  return;
}




void FUN_00102c5d(void)

{
  return;
}




void FUN_00102414(void)

{
  return;
}




void FUN_00102bef(void)

{
  return;
}




void FUN_00102c52(void)

{
  return;
}




void FUN_00102130(undefined8 param_1,undefined8 param_2)

{
  FUN_00102414(param_1,param_2);
  return;
}




void FUN_00101489(undefined8 param_1)

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
  piVar1 = (int *)FUN_001016a6(param_1);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (*piVar1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)*piVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00102726(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_001026ce("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 * FUN_00102380(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_001026f4(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001017b4(long param_1)

{
  FUN_001017d6(param_1 + 0x10);
  return;
}




void FUN_00102726(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101e9a(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001017b4(local_20);
    uVar3 = FUN_0010211e(param_1);
    FUN_00102130(uVar3,uVar2);
    FUN_0010215a(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 FUN_00102dfe(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102f10(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00101bff(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001015eb(undefined8 param_1)

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
  piVar2 = (int *)FUN_001016a6(param_1);
  iVar1 = *piVar2;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_001026ce("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)iVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00102726(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001022fa(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022e8(param_2);
  FUN_001022be(param_1,uVar1);
  FUN_00101c16(param_1);
  return;
}




void FUN_0010247e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001025e1(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_001024f7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102189(param_3);
  FUN_001025f4(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_001022e8(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010235a(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_0010292b(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101a41(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  int local_6c;
  undefined local_68 [32];
  undefined local_48 [26];
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101cac(local_68);
  local_6c = -1;
  local_2e[0] = '\0';
  local_2e[1] = '\0';
  local_2e[2] = '\0';
  local_2e[3] = '\0';
  local_2e[4] = '\0';
  local_2e[5] = '\0';
  local_2e[6] = '\0';
  local_2e[7] = '\0';
  local_2e[8] = '\0';
  local_2e[9] = '\0';
  local_2e[10] = '\0';
  local_2e[0xb] = '\0';
  local_2e[0xc] = '\0';
  local_2e[0xd] = '\0';
                    /* try { // try from 00101a98 to 00101b0f has its CatchHandler @ 00101b5b */
  pcVar1 = fgets(local_2e,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_001026ce("fgets() failed.");
  }
  else {
    local_6c = atoi(local_2e);
  }
  FUN_00101d64(local_68,&local_6c);
  FUN_00101d64(local_68,&local_6c);
  FUN_00101d64(local_68,&local_6c);
  FUN_00101d9e(local_48,local_68);
                    /* try { // try from 00101b17 to 00101b1b has its CatchHandler @ 00101b46 */
  FUN_001015eb(local_48);
  FUN_00101ccc(local_48);
  FUN_00101ccc(local_68);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101d18(undefined8 param_1)

{
  FUN_00101e8a(param_1);
  return;
}




undefined8 FUN_001025e1(undefined8 param_1)

{
  return param_1;
}




int FUN_00102bbf(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




bool FUN_00102da3(pthread_t *param_1)

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




void _FINI_0(void)

{
  if (DAT_00106028 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001013d0();
    DAT_00106028 = 1;
    return;
  }
  return;
}




void FUN_0010153a(undefined8 param_1)

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
  piVar1 = (int *)FUN_001016a6(param_1);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (*piVar1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)*piVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00102726(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_001026ce("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001028fd(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00102cd6(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102c9f,local_18);
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




void FUN_00101d9e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101fca(param_2);
  FUN_00101f79(&local_21,uVar1);
  FUN_00101fdc(param_1,&local_21);
  FUN_00101d18(&local_21);
  uVar1 = FUN_00102064(param_2);
  uVar2 = FUN_00102014(param_2);
                    /* try { // try from 00101e2a to 00101e2e has its CatchHandler @ 00101e31 */
  FUN_001020b0(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010194a(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101cac(local_58);
  local_5c = 7;
                    /* try { // try from 0010198e to 001019cb has its CatchHandler @ 00101a17 */
  FUN_00101d64(local_58,&local_5c);
  FUN_00101d64(local_58,&local_5c);
  FUN_00101d64(local_58,&local_5c);
  FUN_00101d9e(local_38,local_58);
                    /* try { // try from 001019d3 to 001019d7 has its CatchHandler @ 00101a02 */
  FUN_0010153a(local_38);
  FUN_00101ccc(local_38);
  FUN_00101ccc(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001024b8(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102427(*param_1,param_1[1],1);
  }
  return;
}




undefined8 FUN_00102bb0(void)

{
  return 0;
}




void FUN_001028aa(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




ulong FUN_00102ac2(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030f8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102bd9(void)

{
  return;
}




void FUN_00102c68(void)

{
  return;
}




void FUN_00102f80(void)

{
  return;
}




void FUN_00102c7e(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101424) */
/* WARNING: Removing unreachable block (ram,0x00101430) */

void FUN_00101400(void)

{
  return;
}




void FUN_00101774(undefined8 *param_1)

{
  FUN_001017b4(*param_1);
  return;
}




undefined8 FUN_0010211e(undefined8 param_1)

{
  return param_1;
}




void FUN_00102825(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102be4(void)

{
  return;
}




undefined8 FUN_00101704(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101796(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001017f4(undefined8 param_1)

{
  return param_1;
}




void FUN_00101e6a(undefined8 param_1)

{
  FUN_0010210e(param_1);
  return;
}




void FUN_001020b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_0010235a(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001023a4(&local_18);
    FUN_001023c6(local_10,uVar2);
    FUN_00102380(&local_18);
  }
  return;
}




undefined8 FUN_001026b6(void)

{
  return 0x555555555555555;
}




void FUN_00102c1b(void)

{
  return;
}




void FUN_00101b85(void)

{
  FUN_0010194a();
  FUN_00101a41();
  return;
}




void FUN_001027fa(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102850(undefined4 param_1)

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




undefined8 FUN_00101fca(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101f79(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102290(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001023a4(undefined8 *param_1)

{
  FUN_0010256a(*param_1);
  return;
}



