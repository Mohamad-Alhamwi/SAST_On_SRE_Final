
void FUN_00101705(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101962(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




ulong FUN_001019f5(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_0010224c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_00101af9(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00102254,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c47(void)

{
  return;
}




void FUN_00101cc0(void)

{
  return;
}




void FUN_00101c31(void)

{
  return;
}




void FUN_00101831(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101363) */
/* WARNING: Removing unreachable block (ram,0x0010136f) */

void FUN_00101350(void)

{
  return;
}




void FUN_0010172b(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101f40(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101887(undefined4 param_1)

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




void FUN_00101c3c(void)

{
  return;
}




bool FUN_00101dda(pthread_t *param_1)

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




void FUN_001017b1(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00101be7(void)

{
  return 0;
}




undefined8 FUN_00101e58(undefined8 *param_1)

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




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001014d1(void)

{
  long in_FS_OFFSET;
  undefined **local_28;
  undefined *local_20;
  undefined ***local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = (undefined *)0x0;
  local_20 = (undefined *)operator_new__(0x32);
  *local_20 = 0;
  local_28 = &PTR_FUN_00103c98;
  local_18 = &local_28;
  (*(code *)PTR_FUN_00103c98)(local_18,local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101cb5(void)

{
  return;
}




void FUN_00101fb0(void)

{
  return;
}




void FUN_001018e1(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101c68(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a4) */
/* WARNING: Removing unreachable block (ram,0x001013b0) */

void FUN_00101380(void)

{
  return;
}




undefined8 FUN_00101bd8(void)

{
  return 1;
}




void FUN_00101c5d(void)

{
  return;
}




void FUN_0010140a(undefined8 param_1,void *param_2)

{
  long in_FS_OFFSET;
  ulong local_80;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_80 = 0; local_80 < 100; local_80 = local_80 + 1) {
    *(undefined *)((long)param_2 + local_80) = local_78[local_80];
  }
  *(undefined *)((long)param_2 + 99) = 0;
  FUN_00101705(param_2);
  if (param_2 != (void *)0x0) {
    operator_delete__(param_2);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101909(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101995(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_001015d9(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101705("Calling good()...");
  FUN_001015c9();
  FUN_00101705("Finished good()");
  FUN_00101705("Calling bad()...");
  FUN_001014d1();
  FUN_00101705("Finished bad()");
  return 0;
}




void FUN_00101785(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101f0f(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101caa(void)

{
  return;
}




void FUN_00101934(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101c26(void)

{
  return;
}




void FUN_00101c9f(void)

{
  return;
}




void FUN_00101ccb(void)

{
  return;
}




int FUN_00101bf6(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101cd6(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0010154d(void)

{
  long in_FS_OFFSET;
  undefined **local_28;
  undefined *local_20;
  undefined ***local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = (undefined *)0x0;
  local_20 = (undefined *)operator_new__(100);
  *local_20 = 0;
  local_28 = &PTR_FUN_00103cb0;
  local_18 = &local_28;
  (*(code *)PTR_FUN_00103cb0)(local_18,local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010163e(undefined8 param_1,void *param_2)

{
  long in_FS_OFFSET;
  ulong local_80;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_80 = 0; local_80 < 100; local_80 = local_80 + 1) {
    *(undefined *)((long)param_2 + local_80) = local_78[local_80];
  }
  *(undefined *)((long)param_2 + 99) = 0;
  FUN_00101705(param_2);
  if (param_2 != (void *)0x0) {
    operator_delete__(param_2);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101806(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101c10(void)

{
  return;
}




void FUN_00101c1b(void)

{
  return;
}




void FUN_00101c52(void)

{
  return;
}




void FUN_001017db(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101c73(void)

{
  return;
}




void FUN_00101c7e(void)

{
  return;
}




undefined8 FUN_00101d0d(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101cd6,local_18);
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




void FUN_0010175d(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101ef0(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
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




void FUN_001015c9(void)

{
  FUN_0010154d();
  return;
}




void FUN_00101c89(void)

{
  return;
}




undefined8 FUN_00101e35(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101ed1(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f18)();
  return;
}




void FUN_00101c94(void)

{
  return;
}




void FUN_0010185c(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}



