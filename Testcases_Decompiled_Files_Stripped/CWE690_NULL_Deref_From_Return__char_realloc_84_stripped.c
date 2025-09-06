
void FUN_00101771(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00101b98(void)

{
  return 1;
}




int FUN_00101bb6(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101bd0(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101383) */
/* WARNING: Removing unreachable block (ram,0x0010138f) */

void FUN_00101370(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00104020 == '\0') {
    if (PTR___cxa_finalize_00103fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104008);
    }
    FUN_00101370();
    DAT_00104020 = 1;
    return;
  }
  return;
}




void FUN_00101c33(void)

{
  return;
}




bool FUN_00101d9a(pthread_t *param_1)

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




void FUN_00101c1d(void)

{
  return;
}




void FUN_001018c9(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101539(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001016c5("Calling good()...");
  FUN_00101529();
  FUN_001016c5("Finished good()");
  FUN_001016c5("Calling bad()...");
  FUN_00101429();
  FUN_001016c5("Finished bad()");
  return 0;
}




void FUN_0010179b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101922(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101c28(void)

{
  return;
}




void FUN_00101eb0(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010181c(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101be6(void)

{
  return;
}




void FUN_00101f00(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101676(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = 0x696c616974696e49;
  *(undefined2 *)(puVar1 + 1) = 0x657a;
  *(undefined *)((long)puVar1 + 10) = 0;
  FUN_001016c5(*param_1);
  free((void *)*param_1);
  return;
}




undefined8 FUN_00101ccd(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101c96,local_18);
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




void FUN_00101955(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101c54(void)

{
  return;
}




void FUN_0010159e(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  *param_1 = param_2;
  pvVar1 = realloc((void *)*param_1,0x14);
  *param_1 = pvVar1;
  return;
}




void FUN_00101529(void)

{
  FUN_001014a9();
  return;
}




void FUN_00101429(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(8);
                    /* try { // try from 00101457 to 0010145b has its CatchHandler @ 00101480 */
  FUN_00101638(pvVar1,0);
  if (pvVar1 != (void *)0x0) {
    FUN_00101676(pvVar1);
    operator_delete(pvVar1,8);
  }
  return;
}




void FUN_00101bdb(void)

{
  return;
}




void FUN_00101c49(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f10)();
  return;
}




void FUN_00101638(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  *param_1 = param_2;
  pvVar1 = realloc((void *)*param_1,0x14);
  *param_1 = pvVar1;
  return;
}




ulong FUN_001019b5(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00102090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101ba7(void)

{
  return 0;
}




/* WARNING: Removing unreachable block (ram,0x001013c4) */
/* WARNING: Removing unreachable block (ram,0x001013d0) */

void FUN_001013a0(void)

{
  return;
}




void FUN_0010171d(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001017f1(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101c96(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




ulong FUN_00101ab9(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00102098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c12(void)

{
  return;
}




void FUN_00101c8b(void)

{
  return;
}




undefined8 FUN_00101df5(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101bf1(void)

{
  return;
}




undefined8 FUN_00101e18(undefined8 *param_1)

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




void FUN_001016c5(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101745(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001018a1(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101bfc(void)

{
  return;
}




void FUN_00101c07(void)

{
  return;
}




void FUN_00101c3e(void)

{
  return;
}




void FUN_00101847(undefined4 param_1)

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




void FUN_00101c5f(void)

{
  return;
}




void FUN_00101c6a(void)

{
  return;
}




void FUN_00101e91(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001017c6(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001015dc(long *param_1)

{
  undefined8 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = (undefined8 *)*param_1;
    *puVar1 = 0x696c616974696e49;
    *(undefined2 *)(puVar1 + 1) = 0x657a;
    *(undefined *)((long)puVar1 + 10) = 0;
    FUN_001016c5(*param_1);
    free((void *)*param_1);
  }
  return;
}




void FUN_001016eb(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101c75(void)

{
  return;
}




void FUN_00101ecf(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101f70(void)

{
  return;
}




void FUN_001014a9(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(8);
                    /* try { // try from 001014d7 to 001014db has its CatchHandler @ 00101500 */
  FUN_0010159e(pvVar1,0);
  if (pvVar1 != (void *)0x0) {
    FUN_001015dc(pvVar1);
    operator_delete(pvVar1,8);
  }
  return;
}




void FUN_00101c80(void)

{
  return;
}




void FUN_001018f4(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}



