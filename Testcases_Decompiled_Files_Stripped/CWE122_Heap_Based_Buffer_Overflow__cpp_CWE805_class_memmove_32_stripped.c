
void FUN_00101bdd(void)

{
  return;
}




void FUN_00101bfe(void)

{
  return;
}




undefined8 FUN_00101cda(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101ca3,local_18);
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




void FUN_00101c4b(void)

{
  return;
}




void FUN_00101752(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101c82(void)

{
  return;
}




void FUN_001018ae(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101c2a(void)

{
  return;
}




void FUN_00101901(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101c77(void)

{
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00101409(void)

{
  long in_FS_OFFSET;
  undefined8 local_368;
  ulong local_360;
  undefined8 *local_358;
  undefined8 *local_350;
  void *local_348;
  undefined4 *local_340;
  undefined4 local_338 [202];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_358 = &local_368;
  local_350 = &local_368;
  local_368 = 0;
  local_348 = (void *)0x0;
  local_348 = operator_new__(400);
  *local_358 = local_348;
  local_340 = (undefined4 *)*local_350;
  for (local_360 = 0; local_360 < 100; local_360 = local_360 + 1) {
    local_338[local_360 * 2] = 0;
    local_338[local_360 * 2 + 1] = 0;
  }
  memmove(local_340,local_338,800);
  FUN_0010172a(*local_340);
  if (local_340 != (undefined4 *)0x0) {
    operator_delete__(local_340);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00101533(void)

{
  long in_FS_OFFSET;
  undefined8 local_368;
  ulong local_360;
  undefined8 *local_358;
  undefined8 *local_350;
  void *local_348;
  undefined4 *local_340;
  undefined4 local_338 [202];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_358 = &local_368;
  local_350 = &local_368;
  local_368 = 0;
  local_348 = (void *)0x0;
  local_348 = operator_new__(800);
  *local_358 = local_348;
  local_340 = (undefined4 *)*local_350;
  for (local_360 = 0; local_360 < 100; local_360 = local_360 + 1) {
    local_338[local_360 * 2] = 0;
    local_338[local_360 * 2 + 1] = 0;
  }
  memmove(local_340,local_338,800);
  FUN_0010172a(*local_340);
  if (local_340 != (undefined4 *)0x0) {
    operator_delete__(local_340);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a4) */
/* WARNING: Removing unreachable block (ram,0x001013b0) */

void FUN_00101380(void)

{
  return;
}




void FUN_00101c09(void)

{
  return;
}




void FUN_001017fe(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101c1f(void)

{
  return;
}




bool FUN_00101da7(pthread_t *param_1)

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




void FUN_00101ebd(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f18)();
  return;
}




void FUN_00101c61(void)

{
  return;
}




void FUN_00101c8d(void)

{
  return;
}




void FUN_00101ca3(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010192f(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010177e(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_0010166d(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001016d2("Calling good()...");
  FUN_0010165d();
  FUN_001016d2("Finished good()");
  FUN_001016d2("Calling bad()...");
  FUN_00101409();
  FUN_001016d2("Finished bad()");
  return 0;
}




void FUN_00101f10(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101c14(void)

{
  return;
}




ulong FUN_001019c2(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00101bb4(void)

{
  return 0;
}




void FUN_00101c35(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101363) */
/* WARNING: Removing unreachable block (ram,0x0010136f) */

void FUN_00101350(void)

{
  return;
}




ulong FUN_00101ac6(long param_1,ulong param_2,long param_3)

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




void FUN_00101be8(void)

{
  return;
}




void FUN_001017a8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101829(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101c56(void)

{
  return;
}




void FUN_00101edc(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101e9e(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010172a(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101bf3(void)

{
  return;
}




void FUN_00101962(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101854(undefined4 param_1)

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




int FUN_00101bc3(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001016f8(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101c98(void)

{
  return;
}




undefined8 FUN_00101e25(undefined8 *param_1)

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




undefined8 FUN_00101e02(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101f80(void)

{
  return;
}




void FUN_00101c6c(void)

{
  return;
}




void FUN_00101c40(void)

{
  return;
}




void FUN_001017d3(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001018d6(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101ba5(void)

{
  return 1;
}




void FUN_001016d2(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010165d(void)

{
  FUN_00101533();
  return;
}



