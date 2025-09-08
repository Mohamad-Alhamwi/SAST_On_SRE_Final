
void FUN_001019de(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




bool FUN_00101ed7(pthread_t *param_1)

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




void FUN_00101959(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101a31(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101fce(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101d2e(void)

{
  return;
}




void FUN_00101689(void)

{
  size_t sVar1;
  char *__dest;
  int local_30;
  int local_2c;
  char *local_28;
  
  local_28 = (char *)0x0;
  for (local_30 = 0; local_30 < 1; local_30 = local_30 + 1) {
    local_28 = (char *)malloc(0x32);
    if (local_28 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_28,0x41,0x31);
    local_28[0x31] = '\0';
  }
  local_2c = 0;
  while( true ) {
    if (0 < local_2c) {
      return;
    }
    sVar1 = strlen(local_28);
    __dest = (char *)calloc(sVar1 + 1,1);
    if (__dest == (char *)0x0) break;
    strcpy(__dest,local_28);
    FUN_00101802(__dest);
    free(__dest);
    local_2c = local_2c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




void FUN_00101d7b(void)

{
  return;
}




void FUN_001020b0(void)

{
  return;
}




void FUN_00101882(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101d91(void)

{
  return;
}




void FUN_0010185a(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




ulong FUN_00101bf6(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101a92(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101cd5(void)

{
  return 1;
}




undefined8 FUN_00101793(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101802("Calling good()...");
  FUN_00101774();
  FUN_00101802("Finished good()");
  FUN_00101802("Calling bad()...");
  FUN_001014a9();
  FUN_00101802("Finished bad()");
  return 0;
}




undefined8 FUN_00101ce4(void)

{
  return 0;
}




void FUN_00101fed(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101d5a(void)

{
  return;
}




void FUN_00102040(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001018d8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101a06(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101444) */
/* WARNING: Removing unreachable block (ram,0x00101450) */

void FUN_00101420(void)

{
  return;
}




void FUN_00101d9c(void)

{
  return;
}




void FUN_001014a9(void)

{
  size_t sVar1;
  wchar_t *__dest;
  int local_30;
  int local_2c;
  wchar_t *local_28;
  
  local_28 = (wchar_t *)0x0;
  for (local_30 = 0; local_30 < 1; local_30 = local_30 + 1) {
    local_28 = (wchar_t *)malloc(200);
    if (local_28 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    wmemset(local_28,L'A',0x31);
    local_28[0x31] = L'\0';
  }
  local_2c = 0;
  while( true ) {
    if (0 < local_2c) {
      return;
    }
    sVar1 = strlen((char *)local_28);
    __dest = (wchar_t *)calloc(sVar1 + 1,4);
    if (__dest == (wchar_t *)0x0) break;
    wcscpy(__dest,local_28);
    FUN_00101802(__dest);
    free(__dest);
    local_2c = local_2c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




void FUN_00101d39(void)

{
  return;
}




void FUN_001011f0(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_00101802(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ef0)();
  return;
}




int FUN_00101cf3(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001018ae(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101903(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010200c(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101db2(void)

{
  return;
}




ulong FUN_00101af2(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101dd3(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_001011f0(PTR_LOOP_00105008);
    }
    FUN_001013f0();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_00101a5f(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101dbd(void)

{
  return;
}




undefined8 FUN_00101f32(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101d44(void)

{
  return;
}




void FUN_00101d65(void)

{
  return;
}




void FUN_00101d23(void)

{
  return;
}




undefined8 FUN_00101f55(undefined8 *param_1)

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




void FUN_00101774(void)

{
  FUN_00101599();
  FUN_00101689();
  return;
}




void FUN_00101984(undefined4 param_1)

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




void FUN_00101d70(void)

{
  return;
}




void FUN_00101da7(void)

{
  return;
}




undefined8 FUN_00101e0a(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101dd3,local_18);
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




void FUN_00101828(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101d18(void)

{
  return;
}




void FUN_0010192e(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101599(void)

{
  size_t sVar1;
  wchar_t *__dest;
  int local_30;
  int local_2c;
  wchar_t *local_28;
  
  local_28 = (wchar_t *)0x0;
  for (local_30 = 0; local_30 < 1; local_30 = local_30 + 1) {
    local_28 = (wchar_t *)malloc(200);
    if (local_28 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    wmemset(local_28,L'A',0x31);
    local_28[0x31] = L'\0';
  }
  local_2c = 0;
  while( true ) {
    if (0 < local_2c) {
      return;
    }
    sVar1 = wcslen(local_28);
    __dest = (wchar_t *)calloc(sVar1 + 1,4);
    if (__dest == (wchar_t *)0x0) break;
    wcscpy(__dest,local_28);
    FUN_00101828(__dest);
    free(__dest);
    local_2c = local_2c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




void FUN_00101d4f(void)

{
  return;
}




void FUN_00101d86(void)

{
  return;
}




void FUN_00101dc8(void)

{
  return;
}




void FUN_00101d0d(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101403) */
/* WARNING: Removing unreachable block (ram,0x0010140f) */

void FUN_001013f0(void)

{
  return;
}



