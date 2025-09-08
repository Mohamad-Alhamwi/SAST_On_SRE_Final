
undefined8 FUN_00101b8d(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101b56,local_18);
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




ulong FUN_00101979(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001020ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010165b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101dc0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001014f7(void)

{
  FUN_0010140f();
  FUN_0010148a();
  return;
}




void FUN_00101686(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001013a9(void)

{
  int iVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(0x14);
  iVar1 = FUN_00101a58();
  if (iVar1 != 0) {
    *__ptr = 0x696c616974696e49;
    *(undefined2 *)(__ptr + 1) = 0x657a;
    *(undefined *)((long)__ptr + 10) = 0;
    FUN_00101585(__ptr);
    free(__ptr);
  }
  return;
}




undefined8 FUN_00101516(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101585("Calling good()...");
  FUN_001014f7();
  FUN_00101585("Finished good()");
  FUN_00101585("Calling bad()...");
  FUN_001013a9();
  FUN_00101585("Finished bad()");
  return 0;
}




void FUN_00101b2a(void)

{
  return;
}




void FUN_00101789(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101b56(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void _FINI_0(void)

{
  if (DAT_00104018 == '\0') {
    if (PTR___cxa_finalize_00103ff8 != (undefined *)0x0) {
      FUN_00101170(PTR_LOOP_00104008);
    }
    FUN_001012f0();
    DAT_00104018 = 1;
    return;
  }
  return;
}




void FUN_0010140f(void)

{
  int iVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(0x14);
  iVar1 = FUN_00101a67();
  if (iVar1 == 0) {
    if (__ptr != (undefined8 *)0x0) {
      *__ptr = 0x696c616974696e49;
      *(undefined2 *)(__ptr + 1) = 0x657a;
      *(undefined *)((long)__ptr + 10) = 0;
      FUN_00101585(__ptr);
      free(__ptr);
    }
  }
  else {
    FUN_00101585("Benign, fixed string");
  }
  return;
}




void FUN_00101ae8(void)

{
  return;
}




void FUN_001016dc(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101b14(void)

{
  return;
}




bool FUN_00101c5a(pthread_t *param_1)

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




void FUN_00101605(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101abc(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101303) */
/* WARNING: Removing unreachable block (ram,0x0010130f) */

void FUN_001012f0(void)

{
  return;
}




void FUN_001015dd(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101ac7(void)

{
  return;
}




void FUN_00101ab1(void)

{
  return;
}




void FUN_001015ab(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101af3(void)

{
  return;
}




void FUN_00101170(void)

{
  (*(code *)PTR___cxa_finalize_00103ff8)();
  return;
}




void FUN_00101d70(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101761(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101d51(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101a90(void)

{
  return;
}




void FUN_00101afe(void)

{
  return;
}




void FUN_00101e30(void)

{
  return;
}




void FUN_001017e2(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101815(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




ulong FUN_00101875(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001020a4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101a58(void)

{
  return 1;
}




void FUN_00101add(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f30)();
  return;
}




int FUN_00101a76(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101b09(void)

{
  return;
}




undefined8 FUN_00101a67(void)

{
  return 0;
}




void FUN_00101b1f(void)

{
  return;
}




undefined8 FUN_00101cd8(undefined8 *param_1)

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




void FUN_00101d8f(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101344) */
/* WARNING: Removing unreachable block (ram,0x00101350) */

void FUN_00101320(void)

{
  return;
}




void FUN_00101631(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010148a(void)

{
  int iVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(0x14);
  iVar1 = FUN_00101a58();
  if ((iVar1 != 0) && (__ptr != (undefined8 *)0x0)) {
    *__ptr = 0x696c616974696e49;
    *(undefined2 *)(__ptr + 1) = 0x657a;
    *(undefined *)((long)__ptr + 10) = 0;
    FUN_00101585(__ptr);
    free(__ptr);
  }
  return;
}




void FUN_00101a9b(void)

{
  return;
}




void FUN_00101aa6(void)

{
  return;
}




void FUN_00101ad2(void)

{
  return;
}




void FUN_00101707(undefined4 param_1)

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




void FUN_001017b4(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101b40(void)

{
  return;
}




void FUN_001016b1(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00101cb5(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101585(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101b35(void)

{
  return;
}




void FUN_00101b4b(void)

{
  return;
}



