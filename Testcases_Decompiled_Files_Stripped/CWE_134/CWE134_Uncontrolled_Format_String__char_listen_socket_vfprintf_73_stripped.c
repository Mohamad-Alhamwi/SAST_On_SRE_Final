
void FUN_00104392(void)

{
  return;
}




void FUN_00104400(void)

{
  return;
}




undefined8 FUN_001045b9(undefined8 *param_1)

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




void FUN_001043f5(void)

{
  return;
}




void FUN_00103d49(undefined8 param_1,undefined8 param_2)

{
  FUN_00103dec(param_1,param_2,0);
  return;
}




void _FINI_0(void)

{
  if (DAT_00108028 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_001024f0();
    DAT_00108028 = 1;
    return;
  }
  return;
}




void FUN_00104042(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00103e3c(undefined8 param_1)

{
  return param_1;
}




void FUN_001025a9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 char *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  vfprintf(stdout,param_9,&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001034ae(undefined8 param_1)

{
  FUN_00103620(param_1);
  return;
}




void FUN_00103534(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103760(param_2);
  FUN_0010370f(&local_21,uVar1);
  FUN_00103772(param_1,&local_21);
  FUN_001034ae(&local_21);
  uVar1 = FUN_001037fa(param_2);
  uVar2 = FUN_001037aa(param_2);
                    /* try { // try from 001035c0 to 001035c4 has its CatchHandler @ 001035c7 */
  FUN_00103846(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103fbd(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103422(undefined8 param_1)

{
  FUN_00103482(param_1);
  return;
}




void FUN_00103772(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103a7e(param_2);
  FUN_00103a90(param_1,uVar1);
  return;
}




void FUN_00103f92(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103ee6(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00102503) */
/* WARNING: Removing unreachable block (ram,0x0010250f) */

void FUN_001024f0(void)

{
  return;
}




void FUN_00104095(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_0010442c(void)

{
  return;
}




void FUN_00104710(void)

{
  return;
}




void FUN_00103c4e(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00103bbd(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00103846(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00103af0(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00103b3a(&local_18);
    FUN_00103b5c(local_10,uVar2);
    FUN_00103b16(&local_18);
  }
  return;
}




void FUN_0010440b(void)

{
  return;
}




void FUN_00102dd8(void)

{
  long in_FS_OFFSET;
  undefined8 *local_d0;
  undefined local_c8 [32];
  undefined local_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103442(local_c8);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_d0 = &local_88;
  local_88 = 0x7274736465786966;
  local_80 = 0x74736574676e69;
                    /* try { // try from 00102eae to 00102efd has its CatchHandler @ 00102f55 */
  FUN_001034fa(local_c8,&local_d0);
  FUN_001034fa(local_c8,&local_d0);
  FUN_001034fa(local_c8,&local_d0);
  FUN_00103534(local_a8,local_c8);
                    /* try { // try from 00102f08 to 00102f0c has its CatchHandler @ 00102f3d */
  FUN_00102793(local_a8);
  FUN_00103462(local_a8);
  FUN_00103462(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103baa(void)

{
  return;
}




undefined8 * FUN_00103b16(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




undefined8 FUN_0010370f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103a26(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103f3c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_001038b4(undefined8 param_1)

{
  return param_1;
}




void FUN_00104632(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




ulong FUN_0010425a(long param_1,ulong param_2,long param_3)

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




void FUN_001043d4(void)

{
  return;
}




void FUN_001043df(void)

{
  return;
}




void FUN_00104421(void)

{
  return;
}




void FUN_00103f12(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103f67(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103630(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001029f0(local_20);
    uVar3 = FUN_001038b4(param_1);
    FUN_001038c6(uVar3,uVar2);
    FUN_001038f0(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_0010437c(void)

{
  return;
}




undefined8 FUN_00102940(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001029d2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103b5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010391f(param_2);
  uVar2 = FUN_00102940(param_1);
  FUN_001036ae(param_1,uVar2,uVar1);
  return;
}




undefined8 FUN_00103395(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010439d(void)

{
  return;
}




void FUN_00103dce(undefined8 param_1)

{
  FUN_00103e3c(param_1);
  return;
}




void FUN_00103dec(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103e4e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00103c8d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010391f(param_3);
  FUN_00103d8a(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00103e4e(void)

{
  return 0x555555555555555;
}




undefined8 FUN_00104596(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102f85(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_fc;
  char *local_f0;
  size_t local_e8;
  char *local_e0;
  undefined local_d8 [32];
  undefined local_b8 [32];
  sockaddr local_98;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103442(local_d8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  local_f0 = local_88;
  local_fc = -1;
  local_e8 = strlen(local_f0);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_98,0,0x10);
    local_98.sa_family = 2;
    local_98.sa_data[2] = '\0';
    local_98.sa_data[3] = '\0';
    local_98.sa_data[4] = '\0';
    local_98.sa_data[5] = '\0';
    local_98.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(__fd,&local_98,0x10);
                    /* try { // try from 0010310f to 00103293 has its CatchHandler @ 001032eb */
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_fc = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_fc != -1)) {
      sVar2 = recv(local_fc,local_f0 + local_e8,99 - local_e8,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_f0[local_e8 + (long)iVar1] = '\0';
        local_e0 = strchr(local_f0,0xd);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
        local_e0 = strchr(local_f0,10);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_fc != -1) {
    close(local_fc);
  }
  FUN_001034fa(local_d8,&local_f0);
  FUN_001034fa(local_d8,&local_f0);
  FUN_001034fa(local_d8,&local_f0);
  FUN_00103534(local_b8,local_d8);
                    /* try { // try from 0010329e to 001032a2 has its CatchHandler @ 001032d3 */
  FUN_001028a4(local_b8);
  FUN_00103462(local_b8);
  FUN_00103462(local_d8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00104651(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00103a7e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00104339(void)

{
  return 1;
}




void FUN_00103b3a(undefined8 *param_1)

{
  FUN_00103d00(*param_1);
  return;
}




void FUN_00104416(void)

{
  return;
}




undefined8 FUN_00103d77(undefined8 param_1)

{
  return param_1;
}




void FUN_00103fe8(undefined4 param_1)

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




long FUN_00103cca(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




long * FUN_0010298c(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00103402(undefined8 param_1)

{
  FUN_001034ae(param_1);
  return;
}




void FUN_001040c3(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00104437(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001043b3(void)

{
  return;
}




void FUN_00104371(void)

{
  return;
}




void FUN_001028e2(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00102940(param_1);
  FUN_0010298c(&local_18);
  FUN_001029b0(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102a30(undefined8 param_1)

{
  return param_1;
}




void FUN_0010267f(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001028e2(param_1);
  FUN_001025a9(*puVar1,*puVar1);
  return;
}




void FUN_001033cc(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00103e8c(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_001037fa(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103ad2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001028a4(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001028e2(param_1);
  FUN_001027d1(*puVar1,*puVar1);
  return;
}




void FUN_00103d22(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001043c9(void)

{
  return;
}




void FUN_00102a12(undefined8 param_1)

{
  FUN_00102a30(param_1);
  return;
}




void FUN_00103442(undefined8 param_1)

{
  FUN_00103422(param_1);
  return;
}




void FUN_00104670(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00104348(void)

{
  return 0;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00107eb0)();
  return;
}




void FUN_00103bbd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103d22(param_1,param_2,param_3);
  return;
}




void FUN_00103e66(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001043ea(void)

{
  return;
}




undefined8 FUN_00103330(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103e66("Calling good()...");
  FUN_0010331b();
  FUN_00103e66("Finished good()");
  FUN_00103e66("Calling bad()...");
  FUN_00102a42();
  FUN_00103e66("Finished bad()");
  return 0;
}




void FUN_001038f0(undefined8 param_1,undefined8 param_2)

{
  FUN_00103bbd(param_1,param_2,1);
  return;
}




void FUN_001038c6(undefined8 param_1,undefined8 param_2)

{
  FUN_00103baa(param_1,param_2);
  return;
}




void FUN_001027d1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  vfprintf(stdout,"%s",&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001029b0(undefined8 *param_1)

{
  FUN_001029f0(*param_1);
  return;
}




void FUN_0010406a(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00103af0(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_001039fc(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00103bf0(undefined8 param_1)

{
  FUN_00103d49(param_1,1);
  return;
}




undefined8 FUN_0010446e(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104437,local_18);
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




int FUN_00104357(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00103a26(undefined8 param_1,undefined8 param_2)

{
  FUN_00103a54(param_1,param_2);
  return param_1;
}




void FUN_001046a0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102793(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001028e2(param_1);
  FUN_001026bd(*puVar1,*puVar1);
  return;
}




void FUN_00103c14(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103d77(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00103ebe(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001026bd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 char *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  vfprintf(stdout,param_9,&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103ad2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




ulong FUN_00104156(long param_1,ulong param_2,long param_3)

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




void FUN_00104387(void)

{
  return;
}




void FUN_00103a54(undefined8 param_1,undefined8 param_2)

{
  FUN_00103cec(param_1,param_2);
  return;
}




void FUN_001043be(void)

{
  return;
}




void FUN_00102a42(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_fc;
  char *local_f0;
  size_t local_e8;
  char *local_e0;
  undefined local_d8 [32];
  undefined local_b8 [32];
  sockaddr local_98;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103442(local_d8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  local_f0 = local_88;
  local_fc = -1;
  local_e8 = strlen(local_f0);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_98,0,0x10);
    local_98.sa_family = 2;
    local_98.sa_data[2] = '\0';
    local_98.sa_data[3] = '\0';
    local_98.sa_data[4] = '\0';
    local_98.sa_data[5] = '\0';
    local_98.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(__fd,&local_98,0x10);
                    /* try { // try from 00102bcc to 00102d50 has its CatchHandler @ 00102da8 */
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_fc = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_fc != -1)) {
      sVar2 = recv(local_fc,local_f0 + local_e8,99 - local_e8,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_f0[local_e8 + (long)iVar1] = '\0';
        local_e0 = strchr(local_f0,0xd);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
        local_e0 = strchr(local_f0,10);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_fc != -1) {
    close(local_fc);
  }
  FUN_001034fa(local_d8,&local_f0);
  FUN_001034fa(local_d8,&local_f0);
  FUN_001034fa(local_d8,&local_f0);
  FUN_00103534(local_b8,local_d8);
                    /* try { // try from 00102d5b to 00102d5f has its CatchHandler @ 00102d90 */
  FUN_0010267f(local_b8);
  FUN_00103462(local_b8);
  FUN_00103462(local_d8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001033ac(undefined8 param_1)

{
  FUN_001033cc(param_1);
  return;
}




void FUN_00103cec(void)

{
  return;
}




void FUN_001029d2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00102544) */
/* WARNING: Removing unreachable block (ram,0x00102550) */

void FUN_00102520(void)

{
  return;
}




void FUN_0010331b(void)

{
  FUN_00102dd8();
  FUN_00102f85();
  return;
}




undefined8 FUN_00103932(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103bf0(param_1);
  uVar2 = FUN_001038b4(param_1);
  FUN_00103c14(local_38,uVar2,uVar1);
  uVar3 = FUN_0010391f(param_2);
  uVar4 = FUN_001029f0(uVar1);
  FUN_00103c8d(uVar2,uVar4,uVar3);
  FUN_00103cca(local_38,0);
  FUN_00103c4e(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




undefined8 FUN_001037aa(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103ad2(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001038a4(void)

{
  return;
}




undefined8 FUN_0010391f(undefined8 param_1)

{
  return param_1;
}




void FUN_001029f0(long param_1)

{
  FUN_00102a12(param_1 + 0x10);
  return;
}




void FUN_001043a8(void)

{
  return;
}




void FUN_001034ce(undefined8 param_1)

{
  FUN_00103630(param_1);
  FUN_00103402(param_1);
  return;
}




void FUN_00103482(undefined8 param_1)

{
  FUN_00103600(param_1);
  FUN_001033ac(param_1);
  return;
}




void FUN_001036ae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_0010391f(param_3);
  p_Var2 = (_List_node_base *)FUN_00103932(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_001039fc(param_1,1);
  return;
}




void FUN_001040f6(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103620(void)

{
  return;
}




void FUN_00103462(undefined8 param_1)

{
  FUN_001034ce(param_1);
  return;
}




bool FUN_0010453b(pthread_t *param_1)

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




void FUN_00103600(undefined8 param_1)

{
  FUN_001038a4(param_1);
  return;
}




void FUN_00103d00(long param_1)

{
  FUN_00103dce(param_1 + 0x10);
  return;
}




void FUN_00103a90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103a7e(param_2);
  FUN_00103a54(param_1,uVar1);
  FUN_001033ac(param_1);
  return;
}




void FUN_001034fa(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102940(param_1);
  FUN_001036ae(param_1,uVar1,param_2);
  return;
}




undefined8 FUN_00103760(undefined8 param_1)

{
  return param_1;
}




void FUN_00103d8a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_0010391f(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00103395(8,param_2);
  *puVar2 = uVar1;
  return;
}



