
void FUN_00101af9(void)

{
  return;
}




undefined8 FUN_00101cde(undefined8 *param_1)

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




void FUN_00101d76(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101d95(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010181b(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001015e3(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




ulong FUN_0010197f(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_0010221c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void _FINI_0(void)

{
  if (DAT_00104018 == '\0') {
    if (PTR___cxa_finalize_00103fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104008);
    }
    FUN_001012f0();
    DAT_00104018 = 1;
    return;
  }
  return;
}




void FUN_00101b46(void)

{
  return;
}




undefined8 FUN_001014e8(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010158b("Calling good()...");
  FUN_001014d8();
  FUN_0010158b("Finished good()");
  FUN_0010158b("Calling bad()...");
  FUN_001013ee();
  FUN_0010158b("Finished bad()");
  return 0;
}




void FUN_0010178f(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101a96(void)

{
  return;
}




void FUN_00101b04(void)

{
  return;
}




void FUN_001014d8(void)

{
  FUN_00101463();
  return;
}




void FUN_00101b5c(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f30)();
  return;
}




void FUN_0010160b(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001016b7(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101b25(void)

{
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001013ee(void)

{
  long in_FS_OFFSET;
  undefined **local_28;
  void *local_20;
  undefined ***local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = (void *)0x0;
  local_20 = malloc(8);
  local_28 = &PTR_FUN_00103cc8;
  local_18 = &local_28;
  (*(code *)PTR_FUN_00103cc8)(local_18,local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101e30(void)

{
  return;
}




void FUN_001015b1(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101ac2(void)

{
  return;
}




void FUN_0010170d(undefined4 param_1)

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




undefined8 FUN_00101b93(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101b5c,local_18);
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




void FUN_00101aa1(void)

{
  return;
}




int FUN_00101a7c(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




/* WARNING: Removing unreachable block (ram,0x00101344) */
/* WARNING: Removing unreachable block (ram,0x00101350) */

void FUN_00101320(void)

{
  return;
}




undefined8 FUN_00101a5e(void)

{
  return 1;
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




/* WARNING: Removing unreachable block (ram,0x00101303) */
/* WARNING: Removing unreachable block (ram,0x0010130f) */

void FUN_001012f0(void)

{
  return;
}




void FUN_001017ba(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101ab7(void)

{
  return;
}




bool FUN_00101c60(pthread_t *param_1)

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




void FUN_00101d57(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




ulong FUN_0010187b(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00102214,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101ae3(void)

{
  return;
}




void FUN_001013aa(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 5;
    FUN_0010168c(*param_2);
    free(param_2);
  }
  return;
}




void FUN_00101b1a(void)

{
  return;
}




void FUN_001016e2(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010168c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001017e8(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00101cbb(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101acd(void)

{
  return;
}




void FUN_00101aee(void)

{
  return;
}




void FUN_0010158b(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101b3b(void)

{
  return;
}




void FUN_00101661(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101b30(void)

{
  return;
}




void FUN_00101637(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101b0f(void)

{
  return;
}




void FUN_00101767(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101aac(void)

{
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00101463(void)

{
  long in_FS_OFFSET;
  undefined **local_28;
  void *local_20;
  undefined ***local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = (void *)0x0;
  local_20 = malloc(8);
  local_28 = &PTR_FUN_00103cb0;
  local_18 = &local_28;
  (*(code *)PTR_FUN_00103cb0)(local_18,local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010154e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 5;
  FUN_0010168c(*param_2);
  free(param_2);
  return;
}




void FUN_00101ad8(void)

{
  return;
}




undefined8 FUN_00101a6d(void)

{
  return 0;
}




void FUN_00101b51(void)

{
  return;
}



