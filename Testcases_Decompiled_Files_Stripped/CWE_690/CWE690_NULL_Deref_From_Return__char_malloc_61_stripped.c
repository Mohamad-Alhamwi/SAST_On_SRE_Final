
void FUN_00101a93(void)

{
  return;
}




void FUN_00101606(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void * FUN_001013a9(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(0x14);
  return pvVar1;
}




void * FUN_001013cd(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(0x14);
  return pvVar1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f30)();
  return;
}




void FUN_00101aeb(void)

{
  return;
}




void FUN_00101a5c(void)

{
  return;
}




void FUN_00101530(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101a88(void)

{
  return;
}




void FUN_00101b01(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101af6(void)

{
  return;
}




undefined8 FUN_00101a03(void)

{
  return 1;
}




void FUN_0010144b(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)FUN_001013cd(0);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 0x696c616974696e49;
    *(undefined2 *)(__ptr + 1) = 0x657a;
    *(undefined *)((long)__ptr + 10) = 0;
    FUN_00101530(__ptr);
    free(__ptr);
  }
  return;
}




void FUN_00101a46(void)

{
  return;
}




void FUN_00101a9e(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101344) */
/* WARNING: Removing unreachable block (ram,0x00101350) */

void FUN_00101320(void)

{
  return;
}




undefined8 FUN_00101c83(undefined8 *param_1)

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




void FUN_00101d3a(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010178d(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101d1b(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101303) */
/* WARNING: Removing unreachable block (ram,0x0010130f) */

void FUN_001012f0(void)

{
  return;
}




void FUN_001017c0(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101b38(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101b01,local_18);
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




void FUN_0010175f(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101ae0(void)

{
  return;
}




void FUN_00101d70(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00101a12(void)

{
  return 0;
}




void FUN_00101aca(void)

{
  return;
}




undefined8 FUN_001014c1(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101530("Calling good()...");
  FUN_001014ac();
  FUN_00101530("Finished good()");
  FUN_00101530("Calling bad()...");
  FUN_001013f1();
  FUN_00101530("Finished bad()");
  return 0;
}




void FUN_00101abf(void)

{
  return;
}




void FUN_001016b2(undefined4 param_1)

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




int FUN_00101a21(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101588(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




bool FUN_00101c05(pthread_t *param_1)

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




void FUN_001015b0(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001015dc(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101631(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_00101924(long param_1,ulong param_2,long param_3)

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




void FUN_00101687(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101a3b(void)

{
  return;
}




void FUN_00101a51(void)

{
  return;
}




void FUN_0010165c(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101ab4(void)

{
  return;
}




void FUN_00101ad5(void)

{
  return;
}




void FUN_00101cfc(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
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




void FUN_00101734(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010170c(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




ulong FUN_00101820(long param_1,ulong param_2,long param_3)

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




void FUN_001014ac(void)

{
  FUN_0010144b();
  return;
}




void FUN_00101556(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101a72(void)

{
  return;
}




void FUN_001013f1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)FUN_001013a9(0);
  *__ptr = 0x696c616974696e49;
  *(undefined2 *)(__ptr + 1) = 0x657a;
  *(undefined *)((long)__ptr + 10) = 0;
  FUN_00101530(__ptr);
  free(__ptr);
  return;
}




undefined8 FUN_00101c60(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101aa9(void)

{
  return;
}




void FUN_00101170(void)

{
  (*(code *)PTR___cxa_finalize_00103ff8)();
  return;
}




void FUN_00101a67(void)

{
  return;
}




void FUN_00101a7d(void)

{
  return;
}




void FUN_00101de0(void)

{
  return;
}



