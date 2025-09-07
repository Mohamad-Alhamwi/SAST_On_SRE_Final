
void FUN_00103674(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010373d(param_1,param_2,param_3);
  return;
}




void FUN_001038cd(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00104038(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103a7c(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001038a5(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_0010301e(undefined8 param_1)

{
  return param_1;
}




long FUN_0010163e(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00103348(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103520(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_001030f9(undefined8 param_1,undefined8 param_2)

{
  FUN_00103348(param_1,param_2,0);
  return;
}




void FUN_00103dc6(void)

{
  return;
}




void FUN_00101662(void)

{
  long in_FS_OFFSET;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  void *local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c36(local_58);
  local_68 = malloc(4);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_60 = malloc(8);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_78 = local_68;
  local_70 = FUN_00101d3c(local_58);
  FUN_00101d8c(local_38,&local_70);
                    /* try { // try from 0010170a to 0010179f has its CatchHandler @ 001017eb */
  FUN_00101dba(local_58,local_38[0],1,&local_78);
  local_70 = FUN_00101d3c(local_58);
  FUN_00101d8c(local_38,&local_70);
  FUN_00101dba(local_58,local_38[0],1,&local_78);
  local_70 = FUN_00101d3c(local_58);
  FUN_00101d8c(local_38,&local_70);
  FUN_00101dba(local_58,local_38[0],1,&local_78);
  FUN_00101e80(local_38,local_58);
                    /* try { // try from 001017a7 to 001017ab has its CatchHandler @ 001017d6 */
  FUN_001014e9(local_38);
  FUN_00101cf4(local_38);
  FUN_00101cf4(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010266c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010207c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102745(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102d37(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001032ae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103485(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010209e(undefined8 param_1)

{
  return param_1;
}




void FUN_00102903(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e54(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103298(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001031fc(void)

{
  return;
}




void FUN_001015c5(undefined8 param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined8 *)FUN_0010163e(param_1,2);
  __ptr = (void *)*puVar1;
  puVar2 = (undefined4 *)FUN_00101628(4,__ptr);
  *puVar2 = 5;
  FUN_001038a5(*puVar2);
  free(__ptr);
  return;
}




void FUN_001033de(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001035b8(param_1,param_2,param_3);
  return;
}




void FUN_00103979(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00103d20(void)

{
  return 1;
}




void FUN_00102eb6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102ea4(param_3);
  FUN_001031b8(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00102982(undefined8 param_1)

{
  return param_1;
}




void FUN_001038f9(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101e80(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102796(param_2);
  FUN_00102745(&local_31,uVar1);
  uVar1 = FUN_0010271e(param_2);
                    /* try { // try from 00101ee6 to 00101eea has its CatchHandler @ 00101f53 */
  FUN_001027a8(param_1,uVar1,&local_31);
  FUN_00101c82(&local_31);
  uVar2 = FUN_0010203c(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102866(param_2);
  uVar4 = FUN_0010280e(param_2);
                    /* try { // try from 00101f34 to 00101f38 has its CatchHandler @ 00101f71 */
  uVar1 = FUN_001028be(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102e54(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102d8e(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d64(param_1,param_2);
  FUN_00101fc0(param_1);
  return;
}




void FUN_001028be(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e1e(param_1,param_2,param_3);
  return;
}




void FUN_00103d8f(void)

{
  return;
}




void FUN_0010322e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033de(param_1,param_2,param_3);
  return;
}




void FUN_00103e13(void)

{
  return;
}




void FUN_00104090(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001029f4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102e8e(param_1);
  FUN_00102ef3(*param_1,uVar1);
  return;
}




void FUN_00103d63(void)

{
  return;
}




void FUN_00103aaa(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




ulong * FUN_001034f1(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void * FUN_001037ea(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00104100(void)

{
  return;
}




void FUN_0010384d(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103de7(void)

{
  return;
}




void FUN_0010394e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103210(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103263(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010340f(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010280e(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102960(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




undefined8 * FUN_00103608(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_00101c36(undefined8 param_1)

{
  FUN_00101c16(param_1);
  return;
}




void FUN_00102e1e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103187(param_1,param_2,param_3);
  return;
}




void FUN_00102002(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102903(param_1,param_2,param_3);
  }
  return;
}




void FUN_001036a9(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001037a0(&local_10);
  FUN_00102f9e(uVar1);
  return;
}




void FUN_00103dbb(void)

{
  return;
}




void FUN_001030a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102796(param_1);
  FUN_001032df(uVar1);
  return;
}




ulong * FUN_001030ca(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102ef3(undefined8 param_1,undefined8 param_2)

{
  FUN_001031fc(param_1,param_2);
  return;
}




undefined8 FUN_00103127(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103210(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103fa0(undefined8 *param_1)

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




void FUN_00103a51(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101fa0(undefined8 param_1)

{
  FUN_001028f4(param_1);
  return;
}




void FUN_00103add(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00102ca8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_001030f9(param_1,param_2);
  }
  return uVar1;
}




undefined8 FUN_00103520(void)

{
  return 0xfffffffffffffff;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ee0)();
  return;
}




void FUN_00102dc4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102ca8(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00103923(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103030(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00103e1e(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_001032df(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_001034d3(param_1);
  puVar1 = (undefined8 *)FUN_001034f1(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




undefined8 FUN_00102f1d(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103210(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c56(undefined8 param_1)

{
  FUN_00101fa0(param_1);
  FUN_00101fc0(param_1);
  return;
}




void FUN_0010207c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




long FUN_0010340f(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_001039a4(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void * FUN_0010373d(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_001035b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001036a9(param_2);
  uVar2 = FUN_001036a9(param_1);
  FUN_001036cf(uVar2,uVar1,param_3);
  return;
}




void FUN_00103e08(void)

{
  return;
}




void FUN_00101c16(undefined8 param_1)

{
  FUN_00101c56(param_1);
  return;
}




void FUN_00101d8c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010209e(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00101815(void)

{
  long in_FS_OFFSET;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  void *local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c36(local_58);
  local_68 = malloc(4);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_78 = malloc(8);
  local_60 = local_78;
  if (local_78 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_70 = FUN_00101d3c(local_58);
  FUN_00101d8c(local_38,&local_70);
                    /* try { // try from 001018bd to 00101952 has its CatchHandler @ 0010199e */
  FUN_00101dba(local_58,local_38[0],1,&local_78);
  local_70 = FUN_00101d3c(local_58);
  FUN_00101d8c(local_38,&local_70);
  FUN_00101dba(local_58,local_38[0],1,&local_78);
  local_70 = FUN_00101d3c(local_58);
  FUN_00101d8c(local_38,&local_70);
  FUN_00101dba(local_58,local_38[0],1,&local_78);
  FUN_00101e80(local_38,local_58);
                    /* try { // try from 0010195a to 0010195e has its CatchHandler @ 00101989 */
  FUN_00101557(local_38);
  FUN_00101cf4(local_38);
  FUN_00101cf4(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103d79(void)

{
  return;
}




void FUN_0010204e(undefined8 param_1,undefined8 param_2)

{
  FUN_00102935(param_1,param_2);
  return;
}




void FUN_00103187(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010338e(param_1,param_2,param_3);
  return;
}




void FUN_00102960(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00101bf6(undefined8 param_1)

{
  FUN_00101c82(param_1);
  return;
}




void FUN_00102fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_0010301e(param_3);
  uVar2 = FUN_0010301e(local_28);
  uVar3 = FUN_0010301e(local_20);
  uVar1 = FUN_00103263(uVar3,uVar2,uVar1);
  FUN_00103298(&local_30,uVar1);
  return;
}




undefined8 FUN_00103e55(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103e1e,local_18);
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




void FUN_001037b5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001037ea(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101d3c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010207c(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




undefined8 FUN_001020b0(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102960(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103da5(void)

{
  return;
}




ulong FUN_00103b3d(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103538(undefined8 param_1)

{
  return param_1;
}




void FUN_001014e9(undefined8 param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined8 *)FUN_0010163e(param_1,2);
  __ptr = (void *)*puVar1;
  puVar2 = (undefined4 *)FUN_00101628(8,__ptr);
  *puVar2 = 5;
  puVar2[1] = 10;
  FUN_001038a5(*puVar2);
  free(__ptr);
  return;
}




void FUN_00102e7b(void)

{
  return;
}




void FUN_00103174(void)

{
  return;
}




void FUN_00103873(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101ff2(void)

{
  return;
}




long FUN_00102a46(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0010209e(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_0010209e(param_2);
  return lVar1 - *plVar2 >> 3;
}




bool FUN_00103f22(pthread_t *param_1)

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




void FUN_00104019(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00108020 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101430();
    DAT_00108020 = 1;
    return;
  }
  return;
}




void FUN_00102a28(undefined8 param_1)

{
  FUN_00102e8e(param_1);
  return;
}




undefined8 FUN_00101b90(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010384d("Calling good()...");
  FUN_00101b7b();
  FUN_0010384d("Finished good()");
  FUN_0010384d("Calling bad()...");
  FUN_00101662();
  FUN_0010384d("Finished bad()");
  return 0;
}




void FUN_00103df2(void)

{
  return;
}




void FUN_00101c82(undefined8 param_1)

{
  FUN_00101ff2(param_1);
  return;
}




void FUN_0010338e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103538(param_2);
  uVar2 = FUN_00103538(param_1);
  FUN_0010354a(uVar2,uVar1,param_3);
  return;
}




void FUN_00102d64(undefined8 param_1,undefined8 param_2)

{
  FUN_00103174(param_1,param_2);
  return;
}




void FUN_00103d58(void)

{
  return;
}




void FUN_00103d9a(void)

{
  return;
}




void FUN_00102b32(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010301e(param_2);
  uVar2 = FUN_0010301e(param_1);
  FUN_00103030(uVar2,uVar1,param_3);
  return;
}




long FUN_00102e8e(long param_1)

{
  return param_1 + 8;
}




void FUN_001039cf(undefined4 param_1)

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




void FUN_0010354a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_0010301e(param_3);
  uVar2 = FUN_00103653(local_28);
  uVar3 = FUN_00103653(local_20);
  uVar1 = FUN_00103674(uVar3,uVar2,uVar1);
  FUN_00103298(&local_30,uVar1);
  return;
}




void FUN_00103ddc(void)

{
  return;
}




void FUN_00102b83(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010306e(param_1,param_2,param_3);
  return;
}




void FUN_00103dfd(void)

{
  return;
}




ulong FUN_00103c41(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101b7b(void)

{
  FUN_00101815();
  FUN_001019c8();
  return;
}




undefined8 FUN_00102ea4(undefined8 param_1)

{
  return param_1;
}




void FUN_001031b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102ea4(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101628(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00103db0(void)

{
  return;
}




void FUN_001019c8(void)

{
  long in_FS_OFFSET;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  void *local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c36(local_58);
  local_68 = malloc(4);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_60 = malloc(8);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_78 = local_68;
  local_70 = FUN_00101d3c(local_58);
  FUN_00101d8c(local_38,&local_70);
                    /* try { // try from 00101a70 to 00101b05 has its CatchHandler @ 00101b51 */
  FUN_00101dba(local_58,local_38[0],1,&local_78);
  local_70 = FUN_00101d3c(local_58);
  FUN_00101d8c(local_38,&local_70);
  FUN_00101dba(local_58,local_38[0],1,&local_78);
  local_70 = FUN_00101d3c(local_58);
  FUN_00101d8c(local_38,&local_70);
  FUN_00101dba(local_58,local_38[0],1,&local_78);
  FUN_00101e80(local_38,local_58);
                    /* try { // try from 00101b0d to 00101b11 has its CatchHandler @ 00101b3c */
  FUN_001015c5(local_38);
  FUN_00101cf4(local_38);
  FUN_00101cf4(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102d37(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d64(param_1,param_2);
  return param_1;
}




void FUN_001034d3(undefined8 param_1)

{
  FUN_00103520(param_1);
  return;
}




undefined8 FUN_00103653(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102982(&local_10);
  return *puVar1;
}




ulong FUN_00102bb8(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_001030a4(param_1);
  lVar2 = FUN_0010271e(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_0010271e(local_40);
  local_30 = FUN_0010271e(local_40);
  plVar3 = (long *)FUN_001030ca(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_0010271e(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_001030a4(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_001030a4(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_001037a0(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00101dba(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_001020b0(param_1);
  local_18 = FUN_00102107(&local_38,&local_20);
  local_20 = FUN_0010266c(local_30);
  uVar1 = FUN_001026b8(&local_20,local_18);
  FUN_0010214c(local_30,uVar1,param_3,param_4);
  local_20 = FUN_0010266c(local_30);
  FUN_001026b8(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010203c(undefined8 param_1)

{
  return param_1;
}




void FUN_00102f69(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010322e(param_1,param_2,param_3);
  return;
}




void FUN_00101557(undefined8 param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined8 *)FUN_0010163e(param_1,2);
  __ptr = (void *)*puVar1;
  puVar2 = (undefined4 *)FUN_00101628(8,__ptr);
  *puVar2 = 5;
  puVar2[1] = 10;
  FUN_001038a5(*puVar2);
  free(__ptr);
  return;
}




void FUN_00103d84(void)

{
  return;
}




void FUN_00101ca2(long *param_1)

{
  FUN_00102002(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101bf6(param_1);
  return;
}




undefined8 FUN_00101628(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101fc0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00102ae2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f9e(param_2);
  uVar2 = FUN_00102f9e(param_1);
  FUN_00102fb0(uVar2,uVar1,param_3);
  return;
}




void FUN_00103d6e(void)

{
  return;
}




void FUN_00103dd1(void)

{
  return;
}




void FUN_00102935(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e7b(param_1,param_2);
  return;
}




void FUN_00102994(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102ea4(param_3);
  uVar2 = FUN_00102e8e(param_1);
  FUN_00102eb6(*param_1,uVar2,uVar1);
  return;
}




void FUN_00102a8a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f1d(param_2);
  uVar2 = FUN_00102f1d(param_1);
  FUN_00102f69(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00101cf4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010203c(param_1);
  FUN_0010204e(*param_1,param_1[1],uVar1);
  FUN_00101ca2(param_1);
  return;
}




int FUN_00103d3e(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001036cf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_0010301e(param_3);
  uVar2 = FUN_0010301e(local_28);
  uVar3 = FUN_0010301e(local_20);
  uVar1 = FUN_001037b5(uVar3,uVar2,uVar1);
  FUN_00103298(&local_30,uVar1);
  return;
}




undefined8 FUN_001026b8(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_0010207c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104057(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010214c(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102bb8(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_0010266c(local_80);
      local_60 = FUN_00102a46(&local_88,&local_78);
      local_70 = FUN_00102ca8(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_0010203c(local_80);
                    /* try { // try from 00102456 to 001024e1 has its CatchHandler @ 00102599 */
      FUN_00102b83(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_0010203c(local_80);
      puVar2 = (undefined8 *)FUN_0010209e(&local_88);
      local_70 = FUN_00102cdf(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_0010203c(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_0010209e(&local_88);
      local_70 = FUN_00102cdf(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_0010203c(local_80);
      FUN_0010204e(*local_80,local_80[1],uVar1);
      FUN_00102002(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00102994(local_38,param_1,param_4);
                    /* try { // try from 001021d6 to 001023a9 has its CatchHandler @ 0010257b */
      local_50 = FUN_00102a28(local_38);
      local_78 = FUN_00101d3c(local_80);
      local_48 = FUN_00102a46(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_0010203c(local_80);
        FUN_00102a8a(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_0010209e(&local_88);
        FUN_00102ae2(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_0010209e(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_0010209e(&local_88);
        FUN_00102b32(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_0010203c(local_80);
        lVar4 = FUN_00102b83(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_0010203c(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_0010209e(&local_88);
        FUN_00102a8a(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_0010209e(&local_88);
        FUN_00102b32(*puVar2,local_40,local_50);
      }
      FUN_001029f4(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102866(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102960(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103485(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_0010301e(param_1);
  uVar1 = FUN_00103608(uVar1,param_2,param_3);
  FUN_00103298(&local_10,uVar1);
  return;
}




void FUN_001027a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d8e(param_1,param_3);
                    /* try { // try from 001027e2 to 001027e6 has its CatchHandler @ 001027e9 */
  FUN_00102dc4(param_1,param_2);
  return;
}




long FUN_00102107(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102982(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102982(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103a29(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102796(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102f9e(undefined8 param_1)

{
  return param_1;
}




void FUN_00102cdf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103127(param_2);
  uVar2 = FUN_00103127(param_1);
  FUN_00102f69(uVar2,uVar1,param_3,param_4);
  return;
}




long FUN_0010271e(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




undefined8 FUN_00103d2f(void)

{
  return 0;
}




undefined8 FUN_00103f7d(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001028f4(void)

{
  return;
}




void FUN_0010306e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032ae(param_1,param_2,param_3);
  return;
}



