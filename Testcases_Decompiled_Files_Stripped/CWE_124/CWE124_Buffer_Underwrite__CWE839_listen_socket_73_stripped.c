
void FUN_00102fa0(void)

{
  return;
}




void FUN_00101fce(undefined8 param_1)

{
  FUN_00101fae(param_1);
  return;
}




void FUN_00102fab(void)

{
  return;
}




void FUN_001022fe(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010260a(param_2);
  FUN_0010261c(param_1,uVar1);
  return;
}




undefined8 FUN_001025b2(undefined8 param_1,undefined8 param_2)

{
  FUN_001025e0(param_1,param_2);
  return param_1;
}




void FUN_001028d5(undefined8 param_1,undefined8 param_2)

{
  FUN_00102976(param_1,param_2,0);
  return;
}




void FUN_00102958(undefined8 param_1)

{
  FUN_001029c6(param_1);
  return;
}




void FUN_001023d2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_0010267c(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001026c6(&local_18);
    FUN_001026e8(local_10,uVar2);
    FUN_001026a2(&local_18);
  }
  return;
}




void FUN_001028ae(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102f8a(void)

{
  return;
}




void FUN_00102819(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001024ab(param_3);
  FUN_00102916(param_1,param_2,uVar1);
  return;
}




void FUN_00101ea7(void)

{
  FUN_00101b4b();
  FUN_00101c42();
  return;
}




ulong FUN_00102ce0(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040e0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102f11(void)

{
  return;
}




void FUN_00102f1c(void)

{
  return;
}




void FUN_00102f27(void)

{
  return;
}




void FUN_0010223a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_001024ab(param_3);
  p_Var2 = (_List_node_base *)FUN_001024be(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00102588(param_1,1);
  return;
}




void FUN_001020c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001022ec(param_2);
  FUN_0010229b(&local_21,uVar1);
  FUN_001022fe(param_1,&local_21);
  FUN_0010203a(&local_21);
  uVar1 = FUN_00102386(param_2);
  uVar2 = FUN_00102336(param_2);
                    /* try { // try from 0010214c to 00102150 has its CatchHandler @ 00102153 */
  FUN_001023d2(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_001014b0();
    DAT_00107020 = 1;
    return;
  }
  return;
}




undefined8 FUN_001024ab(undefined8 param_1)

{
  return param_1;
}




void FUN_001021bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101894(local_20);
    uVar3 = FUN_00102440(param_1);
    FUN_00102452(uVar3,uVar2);
    FUN_0010247c(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00101f8e(undefined8 param_1)

{
  FUN_0010203a(param_1);
  return;
}




void FUN_0010265e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101c42(void)

{
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined local_88 [32];
  undefined local_68 [32];
  sockaddr local_48;
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101fce(local_88);
  local_98 = -1;
  local_90 = 0xffffffff;
  local_94 = -1;
  local_90 = socket(2,1,6);
  if (local_90 != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data[2] = '\0';
    local_48.sa_data[3] = '\0';
    local_48.sa_data[4] = '\0';
    local_48.sa_data[5] = '\0';
    local_48.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(local_90,&local_48,0x10);
                    /* try { // try from 00101d3c to 00101e2e has its CatchHandler @ 00101e7a */
    if (((iVar1 != -1) && (iVar1 = listen(local_90,5), iVar1 != -1)) &&
       (local_94 = accept(local_90,(sockaddr *)0x0,(socklen_t *)0x0), local_94 != -1)) {
      sVar2 = recv(local_94,local_2e,0xd,0);
      local_8c = (int)sVar2;
      if ((local_8c != -1) && (local_8c != 0)) {
        local_2e[local_8c] = '\0';
        local_98 = atoi(local_2e);
      }
    }
  }
  if (local_90 != -1) {
    close(local_90);
  }
  if (local_94 != -1) {
    close(local_94);
  }
  FUN_00102086(local_88,&local_98);
  FUN_00102086(local_88,&local_98);
  FUN_00102086(local_88,&local_98);
  FUN_001020c0(local_68,local_88);
                    /* try { // try from 00101e36 to 00101e3a has its CatchHandler @ 00101e65 */
  FUN_001016cb(local_68);
  FUN_00101fee(local_68);
  FUN_00101fee(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00101ebc(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001029f0("Calling good()...");
  FUN_00101ea7();
  FUN_001029f0("Finished good()");
  FUN_001029f0("Calling bad()...");
  FUN_001018e6();
  FUN_001029f0("Finished bad()");
  return 0;
}




void FUN_0010288c(long param_1)

{
  FUN_00102958(param_1 + 0x10);
  return;
}




undefined8 FUN_00102903(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_001026a2(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




long * FUN_00101830(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00101876(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101f38(undefined8 param_1)

{
  FUN_00101f58(param_1);
  return;
}




void FUN_00102bcc(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102f5e(void)

{
  return;
}




void FUN_001031bc(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102b1c(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001026c6(undefined8 *param_1)

{
  FUN_0010288c(*param_1);
  return;
}




void FUN_001029f0(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010161a(undefined8 param_1)

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
  piVar1 = (int *)FUN_00101786(param_1);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (*piVar1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)*piVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00102a48(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_001029f0("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001029d8(void)

{
  return 0x555555555555555;
}




undefined8 FUN_0010229b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001025b2(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102bf4(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102c4d(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001027a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102903(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00102430(void)

{
  return;
}




void FUN_0010277c(undefined8 param_1)

{
  FUN_001028d5(param_1,1);
  return;
}




void FUN_00102f48(void)

{
  return;
}




void FUN_00102f3d(void)

{
  return;
}




void FUN_00101f58(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00102a48(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001031db(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001027da(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102749(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102452(undefined8 param_1,undefined8 param_2)

{
  FUN_00102736(param_1,param_2);
  return;
}




void FUN_00101786(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_001017e4(param_1);
  FUN_00101830(&local_18);
  FUN_00101854(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101fee(undefined8 param_1)

{
  FUN_0010205a(param_1);
  return;
}




undefined8 FUN_00103143(undefined8 *param_1)

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




void FUN_00102fb6(void)

{
  return;
}




void FUN_001018e6(void)

{
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined local_88 [32];
  undefined local_68 [32];
  sockaddr local_48;
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101fce(local_88);
  local_98 = -1;
  local_90 = 0xffffffff;
  local_94 = -1;
  local_90 = socket(2,1,6);
  if (local_90 != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data[2] = '\0';
    local_48.sa_data[3] = '\0';
    local_48.sa_data[4] = '\0';
    local_48.sa_data[5] = '\0';
    local_48.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(local_90,&local_48,0x10);
                    /* try { // try from 001019e0 to 00101ad2 has its CatchHandler @ 00101b1e */
    if (((iVar1 != -1) && (iVar1 = listen(local_90,5), iVar1 != -1)) &&
       (local_94 = accept(local_90,(sockaddr *)0x0,(socklen_t *)0x0), local_94 != -1)) {
      sVar2 = recv(local_94,local_2e,0xd,0);
      local_8c = (int)sVar2;
      if ((local_8c != -1) && (local_8c != 0)) {
        local_2e[local_8c] = '\0';
        local_98 = atoi(local_2e);
      }
    }
  }
  if (local_90 != -1) {
    close(local_90);
  }
  if (local_94 != -1) {
    close(local_94);
  }
  FUN_00102086(local_88,&local_98);
  FUN_00102086(local_88,&local_98);
  FUN_00102086(local_88,&local_98);
  FUN_001020c0(local_68,local_88);
                    /* try { // try from 00101ada to 00101ade has its CatchHandler @ 00101b09 */
  FUN_00101569(local_68);
  FUN_00101fee(local_68);
  FUN_00101fee(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00102856(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




undefined8 FUN_00103120(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102a16(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00102440(undefined8 param_1)

{
  return param_1;
}




void FUN_00102f53(void)

{
  return;
}




void FUN_0010205a(undefined8 param_1)

{
  FUN_001021bc(param_1);
  FUN_00101f8e(param_1);
  return;
}




void FUN_0010247c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102749(param_1,param_2,1);
  return;
}




undefined8 FUN_00101f21(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102f74(void)

{
  return;
}




undefined8 FUN_0010267c(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102f06(void)

{
  return;
}




void FUN_00102f69(void)

{
  return;
}




undefined8 FUN_00102386(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010265e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ec0)();
  return;
}




undefined8 FUN_0010260a(undefined8 param_1)

{
  return param_1;
}




void FUN_00102976(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001029d8(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




undefined8 FUN_001017e4(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101876(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001029c6(undefined8 param_1)

{
  return param_1;
}




void FUN_00102086(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001017e4(param_1);
  FUN_0010223a(param_1,uVar1,param_2);
  return;
}




bool FUN_001030c5(pthread_t *param_1)

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




void FUN_001031fa(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101b4b(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101fce(local_58);
  local_5c = 7;
                    /* try { // try from 00101b8f to 00101bcc has its CatchHandler @ 00101c18 */
  FUN_00102086(local_58,&local_5c);
  FUN_00102086(local_58,&local_5c);
  FUN_00102086(local_58,&local_5c);
  FUN_001020c0(local_38,local_58);
                    /* try { // try from 00101bd4 to 00101bd8 has its CatchHandler @ 00101c03 */
  FUN_0010161a(local_38);
  FUN_00101fee(local_38);
  FUN_00101fee(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101504) */
/* WARNING: Removing unreachable block (ram,0x00101510) */

void FUN_001014e0(void)

{
  return;
}




void FUN_00102588(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_001026e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001024ab(param_2);
  uVar2 = FUN_001017e4(param_1);
  FUN_0010223a(param_1,uVar2,uVar1);
  return;
}




void FUN_00102749(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001028ae(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001024be(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010277c(param_1);
  uVar2 = FUN_00102440(param_1);
  FUN_001027a0(local_38,uVar2,uVar1);
  uVar3 = FUN_001024ab(param_2);
  uVar4 = FUN_00101894(uVar1);
  FUN_00102819(uVar2,uVar4,uVar3);
  FUN_00102856(local_38,0);
  FUN_001027da(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_001025e0(undefined8 param_1,undefined8 param_2)

{
  FUN_00102878(param_1,param_2);
  return;
}




void FUN_00102b72(undefined4 param_1)

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




void FUN_001018b6(undefined8 param_1)

{
  FUN_001018d4(param_1);
  return;
}




void FUN_00101fae(undefined8 param_1)

{
  FUN_0010200e(param_1);
  return;
}




ulong FUN_00102de4(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040e8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102878(void)

{
  return;
}




undefined8 FUN_00102ed2(void)

{
  return 0;
}




undefined8 FUN_00102ff8(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102fc1,local_18);
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




/* WARNING: Removing unreachable block (ram,0x001014c3) */
/* WARNING: Removing unreachable block (ram,0x001014cf) */

void FUN_001014b0(void)

{
  return;
}




void FUN_00102b47(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102fc1(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010200e(undefined8 param_1)

{
  FUN_0010218c(param_1);
  FUN_00101f38(param_1);
  return;
}




void FUN_00101894(long param_1)

{
  FUN_001018b6(param_1 + 0x10);
  return;
}




void FUN_00102736(void)

{
  return;
}




undefined8 FUN_00102ec3(void)

{
  return 1;
}




void FUN_00102af1(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102c1f(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




int FUN_00102ee1(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102f7f(void)

{
  return;
}




void FUN_00103230(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102f95(void)

{
  return;
}




void FUN_001016cb(undefined8 param_1)

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
  piVar2 = (int *)FUN_00101786(param_1);
  iVar1 = *piVar2;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_001029f0("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)iVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00102a48(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102336(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010265e(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102a9c(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102efb(void)

{
  return;
}




void FUN_00101569(undefined8 param_1)

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
  piVar1 = (int *)FUN_00101786(param_1);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (*piVar1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)*piVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00102a48(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_001029f0("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101854(undefined8 *param_1)

{
  FUN_00101894(*param_1);
  return;
}




void FUN_0010203a(undefined8 param_1)

{
  FUN_001021ac(param_1);
  return;
}




undefined8 FUN_001022ec(undefined8 param_1)

{
  return param_1;
}




void FUN_00102916(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_001024ab(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101f21(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102f32(void)

{
  return;
}




void FUN_001032a0(void)

{
  return;
}




undefined8 FUN_001018d4(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a70(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102c80(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102ac6(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001021ac(void)

{
  return;
}




void FUN_0010218c(undefined8 param_1)

{
  FUN_00102430(param_1);
  return;
}




void FUN_0010261c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010260a(param_2);
  FUN_001025e0(param_1,uVar1);
  FUN_00101f38(param_1);
  return;
}



