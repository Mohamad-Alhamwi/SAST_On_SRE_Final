
void FUN_00101848(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101dc1(void)

{
  return;
}




void FUN_001017ce(void)

{
  FUN_00101678();
  FUN_00101723();
  return;
}




void FUN_001018a0(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101de2(void)

{
  return;
}




bool FUN_00101f1d(pthread_t *param_1)

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




void FUN_00101aa5(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001011f0(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_00102052(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101d53(void)

{
  return;
}




void FUN_00101e0e(void)

{
  return;
}




void FUN_0010150c(undefined8 *param_1)

{
  void *__s;
  
  __s = malloc(0x32);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,0x31);
  *(undefined *)((long)__s + 0x31) = 0;
  *param_1 = __s;
  return;
}




void FUN_00101d69(void)

{
  return;
}




void FUN_001014a9(undefined8 *param_1)

{
  wchar_t *__s;
  
  __s = (wchar_t *)malloc(200);
  if (__s == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wmemset(__s,L'A',0x31);
  __s[0x31] = L'\0';
  *param_1 = __s;
  return;
}




void FUN_00101949(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102033(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001018f4(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101974(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101403) */
/* WARNING: Removing unreachable block (ram,0x0010140f) */

void FUN_001013f0(void)

{
  return;
}




void FUN_00101ded(void)

{
  return;
}




undefined8 FUN_00101d1b(void)

{
  return 1;
}




void FUN_00101e03(void)

{
  return;
}




void FUN_001015cd(void)

{
  long in_FS_OFFSET;
  wchar_t *local_28;
  size_t local_20;
  wchar_t *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (wchar_t *)0x0;
  FUN_001014a9(&local_28);
  local_20 = strlen((char *)local_28);
  local_18 = (wchar_t *)calloc(local_20 + 1,4);
  if (local_18 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wcscpy(local_18,local_28);
  FUN_00101848(local_18);
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010186e(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00101f9b(undefined8 *param_1)

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




void FUN_00102080(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101d74(void)

{
  return;
}




void FUN_00101ad8(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101444) */
/* WARNING: Removing unreachable block (ram,0x00101450) */

void FUN_00101420(void)

{
  return;
}




void FUN_001019ca(undefined4 param_1)

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




void FUN_0010156a(undefined8 *param_1)

{
  wchar_t *__s;
  
  __s = (wchar_t *)malloc(200);
  if (__s == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wmemset(__s,L'A',0x31);
  __s[0x31] = L'\0';
  *param_1 = __s;
  return;
}




void FUN_00101678(void)

{
  long in_FS_OFFSET;
  char *local_28;
  size_t local_20;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (char *)0x0;
  FUN_0010150c(&local_28);
  local_20 = strlen(local_28);
  local_18 = (char *)calloc(local_20 + 1,1);
  if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  strcpy(local_18,local_28);
  FUN_00101848(local_18);
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101df8(void)

{
  return;
}




void FUN_00101d8a(void)

{
  return;
}




void FUN_0010191e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101dab(void)

{
  return;
}




void FUN_00101e19(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001018c8(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101d95(void)

{
  return;
}




void FUN_00101dcc(void)

{
  return;
}




ulong FUN_00101b38(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00101d2a(void)

{
  return 0;
}




undefined8 FUN_00101f78(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101a77(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101dd7(void)

{
  return;
}




undefined8 FUN_001017e3(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101848("Calling good()...");
  FUN_001017ce();
  FUN_00101848("Finished good()");
  FUN_00101848("Calling bad()...");
  FUN_001015cd();
  FUN_00101848("Finished bad()");
  return 0;
}




int FUN_00101d39(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101d7f(void)

{
  return;
}




void FUN_00101db6(void)

{
  return;
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




void FUN_00101a4c(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001020f0(void)

{
  return;
}




void FUN_00101723(void)

{
  long in_FS_OFFSET;
  wchar_t *local_28;
  size_t local_20;
  wchar_t *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (wchar_t *)0x0;
  FUN_0010156a(&local_28);
  local_20 = wcslen(local_28);
  local_18 = (wchar_t *)calloc(local_20 + 1,4);
  if (local_18 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wcscpy(local_18,local_28);
  FUN_0010186e(local_18);
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ef0)();
  return;
}




void FUN_00102014(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00101e50(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101e19,local_18);
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




ulong FUN_00101c3c(long param_1,ulong param_2,long param_3)

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




void FUN_00101d5e(void)

{
  return;
}




void FUN_00101da0(void)

{
  return;
}




void FUN_00101a24(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010199f(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}



