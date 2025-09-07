
void FUN_00101ce4(void)

{
  return;
}




void FUN_001018b7(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001015d1(void)

{
  void *__ptr;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_18 = -1;
  for (local_20 = 0; local_20 < 1; local_20 = local_20 + 1) {
    local_18 = 7;
  }
  local_1c = 0;
  while( true ) {
    if (0 < local_1c) {
      return;
    }
    __ptr = malloc(0x28);
    if (__ptr == (void *)0x0) break;
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      *(undefined4 *)((long)__ptr + (long)local_14 * 4) = 0;
    }
    if (local_18 < 0) {
      FUN_00101760("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 1;
      for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
        FUN_001017b8(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
      }
    }
    free(__ptr);
    local_1c = local_1c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




void FUN_00101180(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_001016d2(void)

{
  FUN_001014ca();
  FUN_001015d1();
  return;
}




undefined8 FUN_00101d68(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101d31,local_18);
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




void FUN_00101cad(void)

{
  return;
}




void FUN_001017e0(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101cd9(void)

{
  return;
}




undefined8 FUN_00101e90(void *param_1)

{
  free(param_1);
  return 1;
}




bool FUN_00101e35(pthread_t *param_1)

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




void FUN_00101c6b(void)

{
  return;
}




void FUN_00101760(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101c97(void)

{
  return;
}




void FUN_00101cef(void)

{
  return;
}




void FUN_001013c9(void)

{
  void *__ptr;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_18 = -1;
  for (local_20 = 0; local_20 < 1; local_20 = local_20 + 1) {
    local_18 = 10;
  }
  local_1c = 0;
  while( true ) {
    if (0 < local_1c) {
      return;
    }
    __ptr = malloc(0x28);
    if (__ptr == (void *)0x0) break;
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      *(undefined4 *)((long)__ptr + (long)local_14 * 4) = 0;
    }
    if (local_18 < 0) {
      FUN_00101760("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 1;
      for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
        FUN_001017b8(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
      }
    }
    free(__ptr);
    local_1c = local_1c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




void FUN_00101f6a(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




ulong FUN_00101b54(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030e0,local_1c);
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
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_00101180(PTR_LOOP_00105008);
    }
    FUN_00101310();
    DAT_00105018 = 1;
    return;
  }
  return;
}




undefined8 FUN_00101c33(void)

{
  return 1;
}




undefined8 FUN_00101eb3(undefined8 *param_1)

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




ulong FUN_00101a50(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030d8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x00101364) */
/* WARNING: Removing unreachable block (ram,0x00101370) */

void FUN_00101340(void)

{
  return;
}




void FUN_00101d31(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101c76(void)

{
  return;
}




void FUN_00101d1b(void)

{
  return;
}




void FUN_001017b8(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101d10(void)

{
  return;
}




void FUN_0010198f(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101c81(void)

{
  return;
}




void FUN_00101fa0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102010(void)

{
  return;
}




void FUN_00101836(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101f2c(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101861(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010188c(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001018e2(undefined4 param_1)

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




int FUN_00101c51(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101964(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101c8c(void)

{
  return;
}




void FUN_00101ca2(void)

{
  return;
}




void FUN_0010193c(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101d05(void)

{
  return;
}




void FUN_00101d26(void)

{
  return;
}




void FUN_001014ca(void)

{
  void *__ptr;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_18 = -1;
  for (local_20 = 0; local_20 < 1; local_20 = local_20 + 1) {
    local_18 = 10;
  }
  local_1c = 0;
  while( true ) {
    if (0 < local_1c) {
      return;
    }
    __ptr = malloc(0x28);
    if (__ptr == (void *)0x0) break;
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      *(undefined4 *)((long)__ptr + (long)local_14 * 4) = 0;
    }
    if ((local_18 < 0) || (9 < local_18)) {
      FUN_00101760("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 1;
      for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
        FUN_001017b8(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
      }
    }
    free(__ptr);
    local_1c = local_1c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




void FUN_001019f0(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f28)();
  return;
}




void FUN_001019bd(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00101c42(void)

{
  return 0;
}




void FUN_00101786(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010180c(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101cc3(void)

{
  return;
}




undefined8 FUN_001016f1(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101760("Calling good()...");
  FUN_001016d2();
  FUN_00101760("Finished good()");
  FUN_00101760("Calling bad()...");
  FUN_001013c9();
  FUN_00101760("Finished bad()");
  return 0;
}




void FUN_00101f4b(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101cfa(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101323) */
/* WARNING: Removing unreachable block (ram,0x0010132f) */

void FUN_00101310(void)

{
  return;
}




void FUN_00101cb8(void)

{
  return;
}




void FUN_00101cce(void)

{
  return;
}



