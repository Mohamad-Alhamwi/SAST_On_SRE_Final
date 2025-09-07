
void FUN_001018ee(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101f70(void)

{
  return;
}




void FUN_00101bca(void)

{
  return;
}




void FUN_00101c7a(void)

{
  return;
}




void FUN_001017eb(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00101e12(undefined8 *param_1)

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




undefined8 FUN_00101def(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001018c3(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101c90(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101be0(void)

{
  return;
}




void FUN_00101bd5(void)

{
  return;
}




void FUN_001016e5(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101795(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010191c(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101c0c(void)

{
  return;
}




void FUN_00101c4e(void)

{
  return;
}




void FUN_00101eaa(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101c64(void)

{
  return;
}




void FUN_00101c2d(void)

{
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00101512(void)

{
  long in_FS_OFFSET;
  long local_a8;
  ulong local_a0;
  long *local_98;
  long *local_90;
  undefined *local_88;
  void *local_80;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = &local_a8;
  local_90 = &local_a8;
  local_a8 = 0;
  local_88 = (undefined *)0x0;
  local_88 = (undefined *)malloc(100);
  if (local_88 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_88 = 0;
  *local_98 = (long)local_88;
  local_80 = (void *)*local_90;
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_a0 = 0; local_a0 < 100; local_a0 = local_a0 + 1) {
    *(undefined *)((long)local_80 + local_a0) = local_78[local_a0];
  }
  *(undefined *)((long)local_80 + 99) = 0;
  FUN_001016bf(local_80);
  free(local_80);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101cc7(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101c90,local_18);
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




void FUN_00101c22(void)

{
  return;
}




void FUN_00101e8b(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101ec9(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010163b(void)

{
  FUN_00101512();
  return;
}




void FUN_00101beb(void)

{
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001013e9(void)

{
  long in_FS_OFFSET;
  long local_a8;
  ulong local_a0;
  long *local_98;
  long *local_90;
  undefined *local_88;
  void *local_80;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = &local_a8;
  local_90 = &local_a8;
  local_a8 = 0;
  local_88 = (undefined *)0x0;
  local_88 = (undefined *)malloc(0x32);
  if (local_88 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_88 = 0;
  *local_98 = (long)local_88;
  local_80 = (void *)*local_90;
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_a0 = 0; local_a0 < 100; local_a0 = local_a0 + 1) {
    *(undefined *)((long)local_80 + local_a0) = local_78[local_a0];
  }
  *(undefined *)((long)local_80 + 99) = 0;
  FUN_001016bf(local_80);
  free(local_80);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




int FUN_00101bb0(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101c38(void)

{
  return;
}




void FUN_00101717(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101b92(void)

{
  return 1;
}




ulong FUN_00101ab3(long param_1,ulong param_2,long param_3)

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




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




void FUN_00101c59(void)

{
  return;
}




void FUN_0010173f(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101bf6(void)

{
  return;
}




void FUN_001016bf(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f20)();
  return;
}




void FUN_0010176b(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001017c0(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101190(void)

{
  (*(code *)PTR___cxa_finalize_00103ff8)();
  return;
}




ulong FUN_001019af(long param_1,ulong param_2,long param_3)

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




void FUN_00101c85(void)

{
  return;
}




void FUN_00101c17(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00104018 == '\0') {
    if (PTR___cxa_finalize_00103ff8 != (undefined *)0x0) {
      FUN_00101190(PTR_LOOP_00104008);
    }
    FUN_00101330();
    DAT_00104018 = 1;
    return;
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




bool FUN_00101d94(pthread_t *param_1)

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




undefined8 FUN_00101650(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001016bf("Calling good()...");
  FUN_0010163b();
  FUN_001016bf("Finished good()");
  FUN_001016bf("Calling bad()...");
  FUN_001013e9();
  FUN_001016bf("Finished bad()");
  return 0;
}




void FUN_00101841(undefined4 param_1)

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




void FUN_00101c6f(void)

{
  return;
}




void FUN_00101c01(void)

{
  return;
}




void FUN_0010194f(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101ba1(void)

{
  return 0;
}




void FUN_00101816(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010189b(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101c43(void)

{
  return;
}



