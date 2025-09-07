
void FUN_00101b93(void)

{
  return;
}




void FUN_00101bb4(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f18)();
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a4) */
/* WARNING: Removing unreachable block (ram,0x001013b0) */

void FUN_00101380(void)

{
  return;
}




undefined8 FUN_00101dc5(undefined8 *param_1)

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




void FUN_00101c01(void)

{
  return;
}




void FUN_00101748(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101c43(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001018a1(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101be0(void)

{
  return;
}




void FUN_00101902(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101c38(void)

{
  return;
}




void FUN_001015fd(void)

{
  FUN_00101503();
  return;
}




undefined8 FUN_0010160d(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101672("Calling good()...");
  FUN_001015fd();
  FUN_00101672("Finished good()");
  FUN_00101672("Calling bad()...");
  FUN_00101409();
  FUN_00101672("Finished bad()");
  return 0;
}




void FUN_00101409(void)

{
  long in_FS_OFFSET;
  void *local_358;
  ulong local_350;
  void **local_348;
  undefined4 *local_340;
  undefined4 local_338 [202];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_348 = &local_358;
  local_358 = (void *)0x0;
  local_358 = operator_new__(400);
  local_340 = (undefined4 *)*local_348;
  for (local_350 = 0; local_350 < 100; local_350 = local_350 + 1) {
    local_338[local_350 * 2] = 0;
    local_338[local_350 * 2 + 1] = 0;
  }
  memcpy(local_340,local_338,800);
  FUN_001016ca(*local_340);
  if (local_340 != (undefined4 *)0x0) {
    operator_delete__(local_340);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101bbf(void)

{
  return;
}




void FUN_001017f4(undefined4 param_1)

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




void FUN_00101bd5(void)

{
  return;
}




void FUN_00101e3e(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00101c7a(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101c43,local_18);
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




void FUN_00101c17(void)

{
  return;
}




undefined8 FUN_00101da2(void *param_1)

{
  free(param_1);
  return 1;
}




ulong FUN_00101962(long param_1,ulong param_2,long param_3)

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




void FUN_00101773(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101698(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void _FINI_0(void)

{
  if (DAT_00104018 == '\0') {
    if (PTR___cxa_finalize_00103fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104008);
    }
    FUN_00101350();
    DAT_00104018 = 1;
    return;
  }
  return;
}




void FUN_00101bca(void)

{
  return;
}




undefined8 FUN_00101b45(void)

{
  return 1;
}




void FUN_00101c22(void)

{
  return;
}




void FUN_00101503(void)

{
  long in_FS_OFFSET;
  void *local_358;
  ulong local_350;
  void **local_348;
  undefined4 *local_340;
  undefined4 local_338 [202];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_348 = &local_358;
  local_358 = (void *)0x0;
  local_358 = operator_new__(800);
  local_340 = (undefined4 *)*local_348;
  for (local_350 = 0; local_350 < 100; local_350 = local_350 + 1) {
    local_338[local_350 * 2] = 0;
    local_338[local_350 * 2 + 1] = 0;
  }
  memcpy(local_340,local_338,800);
  FUN_001016ca(*local_340);
  if (local_340 != (undefined4 *)0x0) {
    operator_delete__(local_340);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b7d(void)

{
  return;
}




void FUN_00101beb(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101363) */
/* WARNING: Removing unreachable block (ram,0x0010136f) */

void FUN_00101350(void)

{
  return;
}




undefined8 FUN_00101b54(void)

{
  return 0;
}




void FUN_00101b9e(void)

{
  return;
}




void FUN_0010179e(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010184e(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101c0c(void)

{
  return;
}




void FUN_00101eb0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_0010171e(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101ba9(void)

{
  return;
}




ulong FUN_00101a66(long param_1,ulong param_2,long param_3)

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




void FUN_00101876(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101b88(void)

{
  return;
}




void FUN_001016f2(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




bool FUN_00101d47(pthread_t *param_1)

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




void FUN_00101f20(void)

{
  return;
}




void FUN_00101e7c(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101e5d(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101c2d(void)

{
  return;
}




void FUN_00101bf6(void)

{
  return;
}




void FUN_001017c9(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001018cf(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




int FUN_00101b63(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001016ca(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101672(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}



