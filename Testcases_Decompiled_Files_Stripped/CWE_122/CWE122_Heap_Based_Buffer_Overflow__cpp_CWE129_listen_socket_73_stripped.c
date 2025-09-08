
ulong FUN_00102d76(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_0010187a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010190c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_00102e7a(long param_1,ulong param_2,long param_3)

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




void FUN_00103252(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001032c0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_0010308e(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103057,local_18);
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




void FUN_00101fce(undefined8 param_1)

{
  FUN_00101fee(param_1);
  return;
}




void FUN_00102222(undefined8 param_1)

{
  FUN_001024c6(param_1);
  return;
}




undefined8 FUN_001026a0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102712(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102044(undefined8 param_1)

{
  FUN_001020a4(param_1);
  return;
}




void FUN_00102676(undefined8 param_1,undefined8 param_2)

{
  FUN_0010290e(param_1,param_2);
  return;
}




void FUN_00102ce3(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00102541(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00101503) */
/* WARNING: Removing unreachable block (ram,0x0010150f) */

void FUN_001014f0(void)

{
  return;
}




void FUN_00102ade(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102b06(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102b32(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101f3d(void)

{
  FUN_00101be1();
  FUN_00101cd8();
  return;
}




void FUN_0010300a(void)

{
  return;
}




undefined8 FUN_0010196a(undefined8 param_1)

{
  return param_1;
}




void FUN_001020f0(undefined8 param_1)

{
  FUN_00102252(param_1);
  FUN_00102024(param_1);
  return;
}




void FUN_00101cd8(void)

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
  FUN_00102064(local_88);
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
                    /* try { // try from 00101dd2 to 00101ec4 has its CatchHandler @ 00101f10 */
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
  FUN_0010211c(local_88,&local_98);
  FUN_0010211c(local_88,&local_98);
  FUN_0010211c(local_88,&local_98);
  FUN_00102156(local_68,local_88);
                    /* try { // try from 00101ecc to 00101ed0 has its CatchHandler @ 00101efb */
  FUN_00101745(local_68);
  FUN_00102084(local_68);
  FUN_00102084(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101745(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_0010181c(param_1);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_00102a86("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00102ade(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




undefined8 FUN_00102331(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102648(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00101544) */
/* WARNING: Removing unreachable block (ram,0x00101550) */

void FUN_00101520(void)

{
  return;
}




undefined8 FUN_00102648(undefined8 param_1,undefined8 param_2)

{
  FUN_00102676(param_1,param_2);
  return param_1;
}




void FUN_001026b2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001026a0(param_2);
  FUN_00102676(param_1,uVar1);
  FUN_00101fce(param_1);
  return;
}




void FUN_00102394(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001026a0(param_2);
  FUN_001026b2(param_1,uVar1);
  return;
}




void FUN_001015a9(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_0010181c(param_1);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_00102a86("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00102ade(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




void FUN_0010296b(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a0c(param_1,param_2,0);
  return;
}




void FUN_00102c08(undefined4 param_1)

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




void FUN_00102fb2(void)

{
  return;
}




void FUN_00103036(void)

{
  return;
}




void FUN_0010290e(void)

{
  return;
}




undefined8 FUN_001023cc(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001026f4(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001027cc(void)

{
  return;
}




void FUN_0010277e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102541(param_2);
  uVar2 = FUN_0010187a(param_1);
  FUN_001022d0(param_1,uVar2,uVar1);
  return;
}




undefined8 FUN_00101f52(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102a86("Calling good()...");
  FUN_00101f3d();
  FUN_00102a86("Finished good()");
  FUN_00102a86("Calling bad()...");
  FUN_0010197c();
  FUN_00102a86("Finished bad()");
  return 0;
}




undefined8 FUN_00102999(undefined8 param_1)

{
  return param_1;
}




void FUN_001029ee(undefined8 param_1)

{
  FUN_00102a5c(param_1);
  return;
}




void FUN_001024e8(undefined8 param_1,undefined8 param_2)

{
  FUN_001027cc(param_1,param_2);
  return;
}




void FUN_00102064(undefined8 param_1)

{
  FUN_00102044(param_1);
  return;
}




undefined8 FUN_001024d6(undefined8 param_1)

{
  return param_1;
}




void FUN_00103015(void)

{
  return;
}




void FUN_00102bb2(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102b87(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101677(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_0010181c(param_1);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_00102a86("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00102ade(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




void FUN_00102812(undefined8 param_1)

{
  FUN_0010296b(param_1,1);
  return;
}




void FUN_00102fbd(void)

{
  return;
}




void FUN_00103057(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102512(undefined8 param_1,undefined8 param_2)

{
  FUN_001027df(param_1,param_2,1);
  return;
}




void FUN_001020a4(undefined8 param_1)

{
  FUN_00102222(param_1);
  FUN_00101fce(param_1);
  return;
}




long * FUN_001018c6(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00102fa7(void)

{
  return;
}




void FUN_00102ff4(void)

{
  return;
}




undefined8 FUN_00102f59(void)

{
  return 1;
}




undefined8 FUN_00102554(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102812(param_1);
  uVar2 = FUN_001024d6(param_1);
  FUN_00102836(local_38,uVar2,uVar1);
  uVar3 = FUN_00102541(param_2);
  uVar4 = FUN_0010192a(uVar1);
  FUN_001028af(uVar2,uVar4,uVar3);
  FUN_001028ec(local_38,0);
  FUN_00102870(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_0010304c(void)

{
  return;
}




void FUN_00102f9c(void)

{
  return;
}




void FUN_001027df(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102944(param_1,param_2,param_3);
  return;
}




void FUN_00102084(undefined8 param_1)

{
  FUN_001020f0(param_1);
  return;
}




void FUN_00102bdd(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102fe9(void)

{
  return;
}




void FUN_0010192a(long param_1)

{
  FUN_0010194c(param_1 + 0x10);
  return;
}




bool FUN_0010315b(pthread_t *param_1)

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




void FUN_001020d0(undefined8 param_1)

{
  FUN_00102242(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_001014f0();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_00102c8a(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102382(undefined8 param_1)

{
  return param_1;
}




void FUN_00102aac(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010302b(void)

{
  return;
}




void FUN_00102c62(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102024(undefined8 param_1)

{
  FUN_001020d0(param_1);
  return;
}




void FUN_00102252(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_0010192a(local_20);
    uVar3 = FUN_001024d6(param_1);
    FUN_001024e8(uVar3,uVar2);
    FUN_00102512(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 * FUN_00102738(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_0010275c(undefined8 *param_1)

{
  FUN_00102922(*param_1);
  return;
}




void FUN_0010194c(undefined8 param_1)

{
  FUN_0010196a(param_1);
  return;
}




void FUN_00102f91(void)

{
  return;
}




void FUN_00102fc8(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106eb0)();
  return;
}




void FUN_00102156(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102382(param_2);
  FUN_00102331(&local_21,uVar1);
  FUN_00102394(param_1,&local_21);
  FUN_001020d0(&local_21);
  uVar1 = FUN_0010241c(param_2);
  uVar2 = FUN_001023cc(param_2);
                    /* try { // try from 001021e2 to 001021e6 has its CatchHandler @ 001021e9 */
  FUN_00102468(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010241c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001026f4(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001024c6(void)

{
  return;
}




void FUN_0010211c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010187a(param_1);
  FUN_001022d0(param_1,uVar1,param_2);
  return;
}




void FUN_00102242(void)

{
  return;
}




void FUN_00102944(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010181c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_0010187a(param_1);
  FUN_001018c6(&local_18);
  FUN_001018ea(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010261e(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




undefined8 FUN_00102a5c(undefined8 param_1)

{
  return param_1;
}




int FUN_00102f77(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102922(long param_1)

{
  FUN_001029ee(param_1 + 0x10);
  return;
}




undefined8 FUN_00102f68(void)

{
  return 0;
}




void FUN_001018ea(undefined8 *param_1)

{
  FUN_0010192a(*param_1);
  return;
}




void FUN_00102468(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102712(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010275c(&local_18);
    FUN_0010277e(local_10,uVar2);
    FUN_00102738(&local_18);
  }
  return;
}




void FUN_00102fff(void)

{
  return;
}




void FUN_00102a0c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102a6e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




long FUN_001028ec(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001029ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00102541(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101fb7(4,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_00102a6e(void)

{
  return 0x555555555555555;
}




void FUN_00102cb5(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103041(void)

{
  return;
}




void FUN_00102fd3(void)

{
  return;
}




void FUN_00102d16(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103020(void)

{
  return;
}




void FUN_00101fee(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00102870(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001027df(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102a86(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001026f4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00101fb7(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010190c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102b5c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102fde(void)

{
  return;
}




void FUN_00103271(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_001031d9(undefined8 *param_1)

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




void FUN_00102836(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102999(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 FUN_001031b6(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001028af(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102541(param_3);
  FUN_001029ac(param_1,param_2,uVar1);
  return;
}




void FUN_00103330(void)

{
  return;
}




void FUN_00103290(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101be1(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102064(local_58);
  local_5c = 7;
                    /* try { // try from 00101c25 to 00101c62 has its CatchHandler @ 00101cae */
  FUN_0010211c(local_58,&local_5c);
  FUN_0010211c(local_58,&local_5c);
  FUN_0010211c(local_58,&local_5c);
  FUN_00102156(local_38,local_58);
                    /* try { // try from 00101c6a to 00101c6e has its CatchHandler @ 00101c99 */
  FUN_00101677(local_38);
  FUN_00102084(local_38);
  FUN_00102084(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010197c(void)

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
  FUN_00102064(local_88);
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
                    /* try { // try from 00101a76 to 00101b68 has its CatchHandler @ 00101bb4 */
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
  FUN_0010211c(local_88,&local_98);
  FUN_0010211c(local_88,&local_98);
  FUN_0010211c(local_88,&local_98);
  FUN_00102156(local_68,local_88);
                    /* try { // try from 00101b70 to 00101b74 has its CatchHandler @ 00101b9f */
  FUN_001015a9(local_68);
  FUN_00102084(local_68);
  FUN_00102084(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001022d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00102541(param_3);
  p_Var2 = (_List_node_base *)FUN_00102554(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_0010261e(param_1,1);
  return;
}



