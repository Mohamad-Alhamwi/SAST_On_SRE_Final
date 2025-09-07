
void FUN_0010171b(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010179b(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001019ab(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101f06(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00101bfd(void)

{
  return 0;
}




void FUN_0010181c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101f50(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101697(void)

{
  FUN_00101655();
  return;
}




void FUN_00101cb5(void)

{
  return;
}




void FUN_00101c52(void)

{
  return;
}




void FUN_00101cd6(void)

{
  return;
}




void FUN_00101613(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  FUN_001015d5(pvVar1);
  return;
}




void FUN_00101f25(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010194a(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101cec(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101fc0(void)

{
  return;
}




void FUN_00101847(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101407(void *param_1)

{
  long in_FS_OFFSET;
  ulong local_348;
  ulong local_340;
  undefined8 uStack_338;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    *(undefined4 *)(&uStack_338 + local_348) = 0;
    *(undefined4 *)((long)&uStack_338 + local_348 * 8 + 4) = 0;
  }
  for (local_340 = 0; local_340 < 100; local_340 = local_340 + 1) {
    *(undefined8 *)(local_340 * 8 + (long)param_1) = (&uStack_338)[local_340];
  }
  FUN_00101978(param_1);
  free(param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101741(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




ulong FUN_00101b0f(long param_1,ulong param_2,long param_3)

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




ulong FUN_00101a0b(long param_1,ulong param_2,long param_3)

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




void FUN_001014ee(void *param_1)

{
  long in_FS_OFFSET;
  ulong local_348;
  ulong local_340;
  undefined8 uStack_338;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    *(undefined4 *)(&uStack_338 + local_348) = 0;
    *(undefined4 *)((long)&uStack_338 + local_348 * 8 + 4) = 0;
  }
  for (local_340 = 0; local_340 < 100; local_340 = local_340 + 1) {
    *(undefined8 *)(local_340 * 8 + (long)param_1) = (&uStack_338)[local_340];
  }
  FUN_00101978(param_1);
  free(param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001017c7(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001013e8(undefined8 param_1)

{
  FUN_001014ee(param_1);
  return;
}




void FUN_00101978(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101323) */
/* WARNING: Removing unreachable block (ram,0x0010132f) */

void FUN_00101310(void)

{
  return;
}




void FUN_00101773(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_001016ac(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010171b("Calling good()...");
  FUN_00101697();
  FUN_0010171b("Finished good()");
  FUN_0010171b("Calling bad()...");
  FUN_00101613();
  FUN_0010171b("Finished bad()");
  return 0;
}




void FUN_00101c31(void)

{
  return;
}




int FUN_00101c0c(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101c26(void)

{
  return;
}




void FUN_00101c89(void)

{
  return;
}




void FUN_00101c7e(void)

{
  return;
}




void FUN_001017f1(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101c9f(void)

{
  return;
}




void FUN_001013c9(undefined8 param_1)

{
  FUN_00101407(param_1);
  return;
}




void FUN_00101caa(void)

{
  return;
}




undefined8 FUN_00101bee(void)

{
  return 1;
}




void FUN_00101c68(void)

{
  return;
}




void FUN_00101c5d(void)

{
  return;
}




void FUN_001018f7(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101c94(void)

{
  return;
}




void FUN_00101ee7(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00101e6e(undefined8 *param_1)

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




bool FUN_00101df0(pthread_t *param_1)

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




void FUN_00101ce1(void)

{
  return;
}




void FUN_00101180(void)

{
  (*(code *)PTR___cxa_finalize_00103ff8)();
  return;
}




void _FINI_0(void)

{
  if (DAT_00104018 == '\0') {
    if (PTR___cxa_finalize_00103ff8 != (undefined *)0x0) {
      FUN_00101180(PTR_LOOP_00104008);
    }
    FUN_00101310();
    DAT_00104018 = 1;
    return;
  }
  return;
}




void FUN_00101655(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  FUN_001015f4(pvVar1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101364) */
/* WARNING: Removing unreachable block (ram,0x00101370) */

void FUN_00101340(void)

{
  return;
}




void FUN_00101872(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101ccb(void)

{
  return;
}




void FUN_001015f4(undefined8 param_1)

{
  FUN_001013e8(param_1);
  return;
}




void FUN_00101c73(void)

{
  return;
}




void FUN_00101cc0(void)

{
  return;
}




void FUN_00101c3c(void)

{
  return;
}




undefined8 FUN_00101d23(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101cec,local_18);
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




undefined8 FUN_00101e4b(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001015d5(undefined8 param_1)

{
  FUN_001013c9(param_1);
  return;
}




void FUN_0010189d(undefined4 param_1)

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




void FUN_0010191f(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101c47(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f28)();
  return;
}



