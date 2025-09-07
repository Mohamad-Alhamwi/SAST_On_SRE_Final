
void FUN_00101d47(void)

{
  return;
}




void FUN_00101836(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101190(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_00101d9f(void)

{
  return;
}




int FUN_00101d01(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 : 0x00101571 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00101522(void)

{
  long in_FS_OFFSET;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 *local_28;
  undefined4 *local_20;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = &local_38;
  local_20 = &local_38;
  local_30 = 7;
  local_38 = 7;
  local_2c = 7;
  local_18 = malloc(0x28);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_34 = 0; local_34 < 10; local_34 = local_34 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_34 * 4) = 0;
  }
  if (local_2c < 0) {
    FUN_00101810("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_2c * 4) = 1;
    for (local_34 = 0; local_34 < 10; local_34 = local_34 + 1) {
      FUN_00101868(*(undefined4 *)((long)local_18 + (long)local_34 * 4));
    }
  }
  free(local_18);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101d3c(void)

{
  return;
}




void FUN_00101db5(void)

{
  return;
}




void FUN_00101daa(void)

{
  return;
}




void FUN_00101a6d(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




undefined8 FUN_00101ce3(void)

{
  return 1;
}




void FUN_00101d52(void)

{
  return;
}




void FUN_00101de1(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101ffb(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102050(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00101f40(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101992(undefined4 param_1)

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




bool FUN_00101ee5(pthread_t *param_1)

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




void FUN_001019ec(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101dc0(void)

{
  return;
}




void FUN_00101967(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101d94(void)

{
  return;
}




undefined8 FUN_00101f63(undefined8 *param_1)

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




void FUN_00101aa0(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101d7e(void)

{
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001013e9(void)

{
  long in_FS_OFFSET;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int *local_28;
  int *local_20;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = -1;
  local_34 = -1;
  __isoc99_fscanf(stdin,&DAT_00103008,&local_34);
  *local_28 = local_34;
  local_2c = *local_20;
  local_18 = malloc(0x28);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_30 = 0; local_30 < 10; local_30 = local_30 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_30 * 4) = 0;
  }
  if (local_2c < 0) {
    FUN_00101810("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_2c * 4) = 1;
    for (local_30 = 0; local_30 < 10; local_30 = local_30 + 1) {
      FUN_00101868(*(undefined4 *)((long)local_18 + (long)local_30 * 4));
    }
  }
  free(local_18);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101d73(void)

{
  return;
}




void FUN_001018e6(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010201a(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




ulong FUN_00101b00(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030e0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101782(void)

{
  FUN_00101522();
  FUN_00101643();
  return;
}




void FUN_00101dcb(void)

{
  return;
}




undefined8 FUN_001017a1(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101810("Calling good()...");
  FUN_00101782();
  FUN_00101810("Finished good()");
  FUN_00101810("Calling bad()...");
  FUN_001013e9();
  FUN_00101810("Finished bad()");
  return 0;
}




void FUN_00101810(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101868(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101a3f(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001018bc(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




ulong FUN_00101c04(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030e8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101cf2(void)

{
  return 0;
}




void FUN_00101890(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101d68(void)

{
  return;
}




undefined8 FUN_00101e18(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101de1,local_18);
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




void FUN_00101020(void)

{
  (*(code *)PTR_00104f20)();
  return;
}




void FUN_0010193c(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101911(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101a14(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00105028 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_00101190(PTR_LOOP_00105008);
    }
    FUN_00101330();
    DAT_00105028 = 1;
    return;
  }
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00101643(void)

{
  long in_FS_OFFSET;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int *local_28;
  int *local_20;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = -1;
  local_34 = -1;
  __isoc99_fscanf(stdin,&DAT_00103008,&local_34);
  *local_28 = local_34;
  local_2c = *local_20;
  local_18 = malloc(0x28);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_30 = 0; local_30 < 10; local_30 = local_30 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_30 * 4) = 0;
  }
  if ((local_2c < 0) || (9 < local_2c)) {
    FUN_00101810("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_2c * 4) = 1;
    for (local_30 = 0; local_30 < 10; local_30 = local_30 + 1) {
      FUN_00101868(*(undefined4 *)((long)local_18 + (long)local_30 * 4));
    }
  }
  free(local_18);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101d26(void)

{
  return;
}




void FUN_001020c0(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




void FUN_00101dd6(void)

{
  return;
}




void FUN_00101d5d(void)

{
  return;
}




void FUN_00101d89(void)

{
  return;
}




void FUN_00101d1b(void)

{
  return;
}




void FUN_00101d31(void)

{
  return;
}




void FUN_00101fdc(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}



