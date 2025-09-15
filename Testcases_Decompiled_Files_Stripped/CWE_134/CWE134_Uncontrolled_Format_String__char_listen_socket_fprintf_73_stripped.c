
void FUN_001041c5(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010367e(undefined8 param_1,undefined8 param_2)

{
  FUN_0010394b(param_1,param_2,1);
  return;
}




void FUN_001043c0(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_001036ad(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c1a(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00103bca(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103b05(undefined8 param_1)

{
  return param_1;
}




void FUN_00103d4b(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010262b(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102670(param_1);
  fprintf(stdout,"%s\n",*puVar1);
  return;
}




long * FUN_0010271a(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_001025ea(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102670(param_1);
  fprintf(stdout,(char *)*puVar1);
  return;
}




undefined8 FUN_00103642(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00102503) */
/* WARNING: Removing unreachable block (ram,0x0010250f) */

void FUN_001024f0(void)

{
  return;
}




void FUN_0010338e(undefined8 param_1)

{
  FUN_00103632(param_1);
  return;
}




void FUN_001033ae(void)

{
  return;
}




void FUN_001033be(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_0010277e(local_20);
    uVar3 = FUN_00103642(param_1);
    FUN_00103654(uVar3,uVar2);
    FUN_0010367e(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00104183(void)

{
  return;
}




void FUN_00103df8(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001039a2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103b05(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00104157(void)

{
  return;
}




void FUN_00104136(void)

{
  return;
}




void FUN_00103cf5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103e51(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001025a9(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102670(param_1);
  fprintf(stdout,(char *)*puVar1);
  return;
}




void FUN_00102670(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_001026ce(param_1);
  FUN_0010271a(&local_18);
  FUN_0010273e(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103190(undefined8 param_1)

{
  FUN_0010323c(param_1);
  return;
}




void FUN_00103ca0(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00103538(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103860(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103860(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010414c(void)

{
  return;
}




void FUN_00103a7a(void)

{
  return;
}




undefined8 FUN_00103123(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00104324(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001027a0(undefined8 param_1)

{
  FUN_001027be(param_1);
  return;
}




undefined8 FUN_00104347(undefined8 *param_1)

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




void FUN_0010277e(long param_1)

{
  FUN_001027a0(param_1 + 0x10);
  return;
}




void FUN_0010418e(void)

{
  return;
}




void FUN_001031f0(undefined8 param_1)

{
  FUN_0010325c(param_1);
  return;
}




void FUN_001031b0(undefined8 param_1)

{
  FUN_00103210(param_1);
  return;
}




void FUN_001043df(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00107eb0)();
  return;
}




void FUN_001039dc(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_0010394b(*param_1,param_1[1],1);
  }
  return;
}




void FUN_0010410a(void)

{
  return;
}




undefined8 FUN_001034ee(undefined8 param_1)

{
  return param_1;
}




void FUN_00104141(void)

{
  return;
}




undefined8 FUN_0010349d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001037b4(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_001041fc(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001041c5,local_18);
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




void FUN_001027d0(void)

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
  FUN_001031d0(local_d8);
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
                    /* try { // try from 0010295a to 00102ade has its CatchHandler @ 00102b36 */
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
  FUN_00103288(local_d8,&local_f0);
  FUN_00103288(local_d8,&local_f0);
  FUN_00103288(local_d8,&local_f0);
  FUN_001032c2(local_b8,local_d8);
                    /* try { // try from 00102ae9 to 00102aed has its CatchHandler @ 00102b1e */
  FUN_001025a9(local_b8);
  FUN_001031f0(local_b8);
  FUN_001031f0(local_d8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00104199(void)

{
  return;
}




undefined8 FUN_0010387e(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00103ad7(undefined8 param_1,undefined8 param_2)

{
  FUN_00103b7a(param_1,param_2,0);
  return;
}




void FUN_0010381e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010380c(param_2);
  FUN_001037e2(param_1,uVar1);
  FUN_0010313a(param_1);
  return;
}




void FUN_0010394b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103ab0(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001036c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010397e(param_1);
  uVar2 = FUN_00103642(param_1);
  FUN_001039a2(local_38,uVar2,uVar1);
  uVar3 = FUN_001036ad(param_2);
  uVar4 = FUN_0010277e(uVar1);
  FUN_00103a1b(uVar2,uVar4,uVar3);
  FUN_00103a58(local_38,0);
  FUN_001039dc(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




/* WARNING: Removing unreachable block (ram,0x00102544) */
/* WARNING: Removing unreachable block (ram,0x00102550) */

void FUN_00102520(void)

{
  return;
}




void FUN_00103ab0(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00104430(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103dd0(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_0010380c(undefined8 param_1)

{
  return param_1;
}




void FUN_001041ba(void)

{
  return;
}




undefined8 FUN_001027be(undefined8 param_1)

{
  return param_1;
}




void FUN_00103b18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_001036ad(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00103123(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00103500(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010380c(param_2);
  FUN_0010381e(param_1,uVar1);
  return;
}




void FUN_00103938(void)

{
  return;
}




void FUN_001035d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_0010387e(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001038c8(&local_18);
    FUN_001038ea(local_10,uVar2);
    FUN_001038a4(&local_18);
  }
  return;
}




void FUN_00104162(void)

{
  return;
}




void FUN_001043fe(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001032c2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001034ee(param_2);
  FUN_0010349d(&local_21,uVar1);
  FUN_00103500(param_1,&local_21);
  FUN_0010323c(&local_21);
  uVar1 = FUN_00103588(param_2);
  uVar2 = FUN_00103538(param_2);
                    /* try { // try from 0010334e to 00103352 has its CatchHandler @ 00103355 */
  FUN_001035d4(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00103a58(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




ulong FUN_00103ee4(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00103588(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103860(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010273e(undefined8 *param_1)

{
  FUN_0010277e(*param_1);
  return;
}




void FUN_00103e84(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102760(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001037e2(undefined8 param_1,undefined8 param_2)

{
  FUN_00103a7a(param_1,param_2);
  return;
}




undefined8 * FUN_001038a4(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_0010412b(void)

{
  return;
}




undefined8 FUN_001040d6(void)

{
  return 0;
}




void FUN_0010416d(void)

{
  return;
}




void FUN_0010315a(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




int FUN_001040e5(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
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




void FUN_0010323c(undefined8 param_1)

{
  FUN_001033ae(param_1);
  return;
}




undefined8 FUN_001037b4(undefined8 param_1,undefined8 param_2)

{
  FUN_001037e2(param_1,param_2);
  return param_1;
}




void FUN_00104178(void)

{
  return;
}




void FUN_001044a0(void)

{
  return;
}




void FUN_0010313a(undefined8 param_1)

{
  FUN_0010315a(param_1);
  return;
}




void FUN_0010378a(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00104120(void)

{
  return;
}




void FUN_001040ff(void)

{
  return;
}




void FUN_0010397e(undefined8 param_1)

{
  FUN_00103ad7(param_1,1);
  return;
}




void FUN_00103210(undefined8 param_1)

{
  FUN_0010338e(param_1);
  FUN_0010313a(param_1);
  return;
}




undefined8 FUN_001030be(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103bf4("Calling good()...");
  FUN_001030a9();
  FUN_00103bf4("Finished good()");
  FUN_00103bf4("Calling bad()...");
  FUN_001027d0();
  FUN_00103bf4("Finished bad()");
  return 0;
}




void FUN_001031d0(undefined8 param_1)

{
  FUN_001031b0(param_1);
  return;
}




void FUN_0010325c(undefined8 param_1)

{
  FUN_001033be(param_1);
  FUN_00103190(param_1);
  return;
}




void FUN_00103632(void)

{
  return;
}




void FUN_00103a8e(long param_1)

{
  FUN_00103b5c(param_1 + 0x10);
  return;
}




void FUN_001041a4(void)

{
  return;
}




void FUN_001038c8(undefined8 *param_1)

{
  FUN_00103a8e(*param_1);
  return;
}




void FUN_00103654(undefined8 param_1,undefined8 param_2)

{
  FUN_00103938(param_1,param_2);
  return;
}




void FUN_00103a1b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001036ad(param_3);
  FUN_00103b18(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_001040c7(void)

{
  return 1;
}




void FUN_00103d76(undefined4 param_1)

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




void FUN_00103e23(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




ulong FUN_00103fe8(long param_1,ulong param_2,long param_3)

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




void FUN_00102d13(void)

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
  FUN_001031d0(local_d8);
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
                    /* try { // try from 00102e9d to 00103021 has its CatchHandler @ 00103079 */
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
  FUN_00103288(local_d8,&local_f0);
  FUN_00103288(local_d8,&local_f0);
  FUN_00103288(local_d8,&local_f0);
  FUN_001032c2(local_b8,local_d8);
                    /* try { // try from 0010302c to 00103030 has its CatchHandler @ 00103061 */
  FUN_0010262b(local_b8);
  FUN_001031f0(local_b8);
  FUN_001031f0(local_d8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103288(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001026ce(param_1);
  FUN_0010343c(param_1,uVar1,param_2);
  return;
}




undefined8 FUN_001026ce(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102760(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010343c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_001036ad(param_3);
  p_Var2 = (_List_node_base *)FUN_001036c0(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_0010378a(param_1,1);
  return;
}




void FUN_001038ea(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001036ad(param_2);
  uVar2 = FUN_001026ce(param_1);
  FUN_0010343c(param_1,uVar2,uVar1);
  return;
}




undefined8 FUN_00103bdc(void)

{
  return 0x555555555555555;
}




void FUN_00103b7a(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103bdc(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00103cca(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102b66(void)

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
  FUN_001031d0(local_c8);
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
                    /* try { // try from 00102c3c to 00102c8b has its CatchHandler @ 00102ce3 */
  FUN_00103288(local_c8,&local_d0);
  FUN_00103288(local_c8,&local_d0);
  FUN_00103288(local_c8,&local_d0);
  FUN_001032c2(local_a8,local_c8);
                    /* try { // try from 00102c96 to 00102c9a has its CatchHandler @ 00102ccb */
  FUN_001025ea(local_a8);
  FUN_001031f0(local_a8);
  FUN_001031f0(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103c74(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103b5c(undefined8 param_1)

{
  FUN_00103bca(param_1);
  return;
}




void FUN_001030a9(void)

{
  FUN_00102b66();
  FUN_00102d13();
  return;
}




void FUN_00103c4c(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001041af(void)

{
  return;
}




void FUN_00104115(void)

{
  return;
}




void FUN_00103bf4(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103d20(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




bool FUN_001042c9(pthread_t *param_1)

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



