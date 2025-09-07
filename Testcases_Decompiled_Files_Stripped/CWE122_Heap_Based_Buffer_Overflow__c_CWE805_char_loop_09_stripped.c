
void FUN_00101911(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
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




int FUN_00101bfe(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101cbd(void)

{
  return;
}




void FUN_0010180e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101e3d(void *param_1)

{
  free(param_1);
  return 1;
}




bool FUN_00101de2(pthread_t *param_1)

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




void FUN_001018e9(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101cd3(void)

{
  return;
}




void FUN_00101c23(void)

{
  return;
}




void FUN_00101c18(void)

{
  return;
}




void FUN_0010170d(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001017b9(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010193c(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101c4f(void)

{
  return;
}




void FUN_00101c91(void)

{
  return;
}




void FUN_00101ed9(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101ca7(void)

{
  return;
}




void FUN_00101c70(void)

{
  return;
}




void FUN_001014c1(void)

{
  long in_FS_OFFSET;
  undefined *local_88;
  ulong local_80;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (undefined *)0x0;
  if (DAT_001020c4 == 0) {
    local_88 = (undefined *)malloc(100);
    if (local_88 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_88 = 0;
  }
  else {
    FUN_0010170d("Benign, fixed string");
  }
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_80 = 0; local_80 < 100; local_80 = local_80 + 1) {
    local_88[local_80] = local_78[local_80];
  }
  local_88[99] = 0;
  FUN_0010170d(local_88);
  free(local_88);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101cde(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101c65(void)

{
  return;
}




undefined8 FUN_00101e60(undefined8 *param_1)

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




void FUN_00101ef8(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001015a7(void)

{
  long in_FS_OFFSET;
  undefined *local_88;
  ulong local_80;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (undefined *)0x0;
  if (DAT_001020c0 != 0) {
    local_88 = (undefined *)malloc(100);
    if (local_88 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_88 = 0;
  }
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_80 = 0; local_80 < 100; local_80 = local_80 + 1) {
    local_88[local_80] = local_78[local_80];
  }
  local_88[99] = 0;
  FUN_0010170d(local_88);
  free(local_88);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101c2e(void)

{
  return;
}




void FUN_001013e9(void)

{
  long in_FS_OFFSET;
  undefined *local_88;
  ulong local_80;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (undefined *)0x0;
  if (DAT_001020c0 != 0) {
    local_88 = (undefined *)malloc(0x32);
    if (local_88 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_88 = 0;
  }
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_80 = 0; local_80 < 100; local_80 = local_80 + 1) {
    local_88[local_80] = local_78[local_80];
  }
  local_88[99] = 0;
  FUN_0010170d(local_88);
  free(local_88);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101bef(void)

{
  return 0;
}




void FUN_00101c7b(void)

{
  return;
}




void FUN_00101733(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




ulong FUN_00101b01(long param_1,ulong param_2,long param_3)

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




ulong FUN_001019fd(long param_1,ulong param_2,long param_3)

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




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




void FUN_00101c9c(void)

{
  return;
}




void FUN_00101765(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101c39(void)

{
  return;
}




undefined8 FUN_0010169e(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010170d("Calling good()...");
  FUN_0010167f();
  FUN_0010170d("Finished good()");
  FUN_0010170d("Calling bad()...");
  FUN_001013e9();
  FUN_0010170d("Finished bad()");
  return 0;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f20)();
  return;
}




void FUN_0010178d(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001017e3(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101190(void)

{
  (*(code *)PTR___cxa_finalize_00103ff8)();
  return;
}




void FUN_0010199d(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101cc8(void)

{
  return;
}




void FUN_00101c5a(void)

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




void FUN_00101fc0(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




undefined8 FUN_00101d15(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101cde,local_18);
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




void FUN_00101f17(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010167f(void)

{
  FUN_001014c1();
  FUN_001015a7();
  return;
}




void FUN_00101864(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101cb2(void)

{
  return;
}




void FUN_00101c44(void)

{
  return;
}




void FUN_0010196a(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00101be0(void)

{
  return 1;
}




void FUN_00101839(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010188f(undefined4 param_1)

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




void FUN_00101c86(void)

{
  return;
}



