
void FUN_00102c19(void)

{
  return;
}




void FUN_00101bfe(undefined8 param_1)

{
  FUN_00101c1e(param_1);
  return;
}




void FUN_00102c24(void)

{
  return;
}




void FUN_00101e82(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001017c4(local_20);
    uVar3 = FUN_00102106(param_1);
    FUN_00102118(uVar3,uVar2);
    FUN_00102142(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102142(undefined8 param_1,undefined8 param_2)

{
  FUN_0010240f(param_1,param_2,1);
  return;
}




long FUN_0010251c(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102574(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00101fb2(undefined8 param_1)

{
  return param_1;
}




void FUN_001024df(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102171(param_3);
  FUN_001025dc(param_1,param_2,uVar1);
  return;
}




void FUN_00102c03(void)

{
  return;
}




void FUN_0010240f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102574(param_1,param_2,param_3);
  return;
}




void FUN_001017e6(undefined8 param_1)

{
  FUN_00101804(param_1);
  return;
}




ulong FUN_001029a6(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_00102aaa(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102b89(void)

{
  return 1;
}




void FUN_00101d86(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101fb2(param_2);
  FUN_00101f61(&local_21,uVar1);
  FUN_00101fc4(param_1,&local_21);
  FUN_00101d00(&local_21);
  uVar1 = FUN_0010204c(param_2);
  uVar2 = FUN_00101ffc(param_2);
                    /* try { // try from 00101e12 to 00101e16 has its CatchHandler @ 00101e19 */
  FUN_00102098(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102ea1(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101cd4(undefined8 param_1)

{
  FUN_00101e52(param_1);
  FUN_00101bfe(param_1);
  return;
}




void FUN_001020f6(void)

{
  return;
}




void FUN_00101d4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101714(param_1);
  FUN_00101f00(param_1,uVar1,param_2);
  return;
}




undefined8 FUN_00101b82(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001026b6("Calling good()...");
  FUN_00101b72();
  FUN_001026b6("Finished good()");
  FUN_001026b6("Calling bad()...");
  FUN_00101816();
  FUN_001026b6("Finished bad()");
  return 0;
}




undefined8 FUN_00102278(undefined8 param_1,undefined8 param_2)

{
  FUN_001022a6(param_1,param_2);
  return param_1;
}




void FUN_001017c4(long param_1)

{
  FUN_001017e6(param_1 + 0x10);
  return;
}




undefined8 FUN_00101804(undefined8 param_1)

{
  return param_1;
}




void FUN_001024a0(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_0010240f(*param_1,param_1[1],1);
  }
  return;
}




void FUN_0010253e(void)

{
  return;
}




undefined8 FUN_001022d0(undefined8 param_1)

{
  return param_1;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001014d0();
    DAT_00106020 = 1;
    return;
  }
  return;
}




void FUN_0010161f(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *__ptr;
  ulong local_18;
  
  piVar2 = (int *)FUN_001016b6(param_1);
  iVar1 = *piVar2;
  __ptr = (undefined4 *)malloc((long)iVar1 << 2);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < (ulong)(long)iVar1; local_18 = local_18 + 1) {
    __ptr[local_18] = 0;
  }
  FUN_0010270e(*__ptr);
  free(__ptr);
  return;
}




void FUN_00101a7b(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c94(local_58);
  local_5c = 0x14;
                    /* try { // try from 00101abf to 00101afc has its CatchHandler @ 00101b48 */
  FUN_00101d4c(local_58,&local_5c);
  FUN_00101d4c(local_58,&local_5c);
  FUN_00101d4c(local_58,&local_5c);
  FUN_00101d86(local_38,local_58);
                    /* try { // try from 00101b04 to 00101b08 has its CatchHandler @ 00101b33 */
  FUN_0010161f(local_38);
  FUN_00101cb4(local_38);
  FUN_00101cb4(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001027b7(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102bd7(void)

{
  return;
}




void FUN_00102c71(void)

{
  return;
}




void FUN_00102736(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001022e2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022d0(param_2);
  FUN_001022a6(param_1,uVar1);
  FUN_00101bfe(param_1);
  return;
}




void FUN_0010261e(undefined8 param_1)

{
  FUN_0010268c(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105eb8)();
  return;
}




void FUN_001025dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00102171(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101be7(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101e52(undefined8 param_1)

{
  FUN_001020f6(param_1);
  return;
}




void FUN_001027e2(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102838(undefined4 param_1)

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




void FUN_001023ae(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102171(param_2);
  uVar2 = FUN_00101714(param_1);
  FUN_00101f00(param_1,uVar2,uVar1);
  return;
}




void FUN_00101fc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022d0(param_2);
  FUN_001022e2(param_1,uVar1);
  return;
}




void FUN_0010238c(undefined8 *param_1)

{
  FUN_00102552(*param_1);
  return;
}




void FUN_00102ec0(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102bc1(void)

{
  return;
}




int FUN_00102ba7(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101b72(void)

{
  FUN_00101a7b();
  return;
}




undefined8 FUN_0010268c(undefined8 param_1)

{
  return param_1;
}




void FUN_00102c7c(void)

{
  return;
}




void FUN_001023fc(void)

{
  return;
}




undefined8 FUN_0010204c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102324(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x001014e3) */
/* WARNING: Removing unreachable block (ram,0x001014ef) */

void FUN_001014d0(void)

{
  return;
}




void FUN_00101c1e(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00102c66(void)

{
  return;
}




undefined8 FUN_00102e09(undefined8 *param_1)

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




void FUN_00102c2f(void)

{
  return;
}




void FUN_00101784(undefined8 *param_1)

{
  FUN_001017c4(*param_1);
  return;
}




void FUN_00102442(undefined8 param_1)

{
  FUN_0010259b(param_1,1);
  return;
}




void FUN_00102c5b(void)

{
  return;
}




void FUN_0010263c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010269e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




undefined8 FUN_00101ffc(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102324(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102bcc(void)

{
  return;
}




undefined8 FUN_00102de6(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101c94(undefined8 param_1)

{
  FUN_00101c74(param_1);
  return;
}




void FUN_00102098(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102342(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010238c(&local_18);
    FUN_001023ae(local_10,uVar2);
    FUN_00102368(&local_18);
  }
  return;
}




void FUN_00101816(void)

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
  FUN_00101c94(local_88);
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
                    /* try { // try from 00101910 to 00101a02 has its CatchHandler @ 00101a4e */
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
  FUN_00101d4c(local_88,&local_98);
  FUN_00101d4c(local_88,&local_98);
  FUN_00101d4c(local_88,&local_98);
  FUN_00101d86(local_68,local_88);
                    /* try { // try from 00101a0a to 00101a0e has its CatchHandler @ 00101a39 */
  FUN_00101589(local_68);
  FUN_00101cb4(local_68);
  FUN_00101cb4(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102bed(void)

{
  return;
}




void FUN_001022a6(undefined8 param_1,undefined8 param_2)

{
  FUN_0010253e(param_1,param_2);
  return;
}




void FUN_00102946(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102f60(void)

{
  return;
}




void FUN_00102be2(void)

{
  return;
}




undefined8 FUN_00101f61(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102278(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00102184(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102442(param_1);
  uVar2 = FUN_00102106(param_1);
  FUN_00102466(local_38,uVar2,uVar1);
  uVar3 = FUN_00102171(param_2);
  uVar4 = FUN_001017c4(uVar1);
  FUN_001024df(uVar2,uVar4,uVar3);
  FUN_0010251c(local_38,0);
  FUN_001024a0(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_0010259b(undefined8 param_1,undefined8 param_2)

{
  FUN_0010263c(param_1,param_2,0);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101524) */
/* WARNING: Removing unreachable block (ram,0x00101530) */

void FUN_00101500(void)

{
  return;
}




undefined8 FUN_001025c9(undefined8 param_1)

{
  return param_1;
}




void FUN_00101cb4(undefined8 param_1)

{
  FUN_00101d20(param_1);
  return;
}




void FUN_00102c50(void)

{
  return;
}




void FUN_00102c87(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001017a6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102118(undefined8 param_1,undefined8 param_2)

{
  FUN_001023fc(param_1,param_2);
  return;
}




void FUN_00102324(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 * FUN_00102368(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




undefined8 FUN_00102106(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102171(undefined8 param_1)

{
  return param_1;
}




void FUN_0010278c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101714(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001017a6(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101be7(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102466(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001025c9(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_001028ba(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102c45(void)

{
  return;
}




void FUN_00102762(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102c3a(void)

{
  return;
}




void FUN_00101c54(undefined8 param_1)

{
  FUN_00101d00(param_1);
  return;
}




void FUN_001016b6(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101714(param_1);
  FUN_00101760(&local_18);
  FUN_00101784(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102342(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102e82(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102892(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010270e(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010280d(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001028e5(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102bf8(void)

{
  return;
}




undefined8 FUN_00102cbe(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102c87,local_18);
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




void FUN_00102c0e(void)

{
  return;
}




void FUN_00102ef0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101f00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00102171(param_3);
  p_Var2 = (_List_node_base *)FUN_00102184(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_0010224e(param_1,1);
  return;
}




void FUN_001026b6(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102913(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102552(long param_1)

{
  FUN_0010261e(param_1 + 0x10);
  return;
}




void FUN_00101589(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *__ptr;
  ulong local_18;
  
  piVar2 = (int *)FUN_001016b6(param_1);
  iVar1 = *piVar2;
  __ptr = (undefined4 *)malloc((long)iVar1 << 2);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < (ulong)(long)iVar1; local_18 = local_18 + 1) {
    __ptr[local_18] = 0;
  }
  FUN_0010270e(*__ptr);
  free(__ptr);
  return;
}




void FUN_00101c74(undefined8 param_1)

{
  FUN_00101cd4(param_1);
  return;
}




void FUN_00101e72(void)

{
  return;
}




undefined8 FUN_00102b98(void)

{
  return 0;
}




bool FUN_00102d8b(pthread_t *param_1)

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




long * FUN_00101760(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




undefined8 FUN_0010269e(void)

{
  return 0x555555555555555;
}




void FUN_001026dc(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101d20(undefined8 param_1)

{
  FUN_00101e82(param_1);
  FUN_00101c54(param_1);
  return;
}




void FUN_00101d00(undefined8 param_1)

{
  FUN_00101e72(param_1);
  return;
}




void FUN_0010224e(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}



