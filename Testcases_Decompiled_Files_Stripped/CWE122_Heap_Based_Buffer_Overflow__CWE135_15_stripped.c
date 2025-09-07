
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




void FUN_00101a0e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101ef3(void)

{
  return;
}




void FUN_001019b8(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101a64(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00101f40(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101f09,local_18);
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




void FUN_00102170(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




int FUN_00101e29(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




/* WARNING: Removing unreachable block (ram,0x00101403) */
/* WARNING: Removing unreachable block (ram,0x0010140f) */

void FUN_001013f0(void)

{
  return;
}




void FUN_00101e85(void)

{
  return;
}




void FUN_00102104(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101896(void)

{
  FUN_00101574();
  FUN_0010163f();
  FUN_0010170a();
  FUN_001017d0();
  return;
}




void FUN_00101e9b(void)

{
  return;
}




void FUN_001017d0(void)

{
  char *__s;
  size_t sVar1;
  char *__dest;
  
  __s = (char *)malloc(0x32);
  if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,0x31);
  __s[0x31] = '\0';
  sVar1 = strlen(__s);
  __dest = (char *)calloc(sVar1 + 1,1);
  if (__dest == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  strcpy(__dest,__s);
  FUN_00101938(__dest);
  free(__dest);
  return;
}




void FUN_00101b3c(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101aba(undefined4 param_1)

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




void FUN_00101b67(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101574(void)

{
  wchar_t *__s;
  size_t sVar1;
  wchar_t *__dest;
  
  __s = (wchar_t *)malloc(200);
  if (__s == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wmemset(__s,L'A',0x31);
  __s[0x31] = L'\0';
  sVar1 = wcslen(__s);
  __dest = (wchar_t *)calloc(sVar1 + 1,4);
  if (__dest == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wcscpy(__dest,__s);
  FUN_0010195e(__dest);
  free(__dest);
  return;
}




bool FUN_0010200d(pthread_t *param_1)

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




void FUN_00101e64(void)

{
  return;
}




undefined8 FUN_0010208b(undefined8 *param_1)

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




void FUN_00101938(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101a39(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101ea6(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ef0)();
  return;
}




void FUN_00101e43(void)

{
  return;
}




void FUN_0010163f(void)

{
  wchar_t *__s;
  size_t sVar1;
  wchar_t *__dest;
  
  __s = (wchar_t *)malloc(200);
  if (__s == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wmemset(__s,L'A',0x31);
  __s[0x31] = L'\0';
  sVar1 = wcslen(__s);
  __dest = (wchar_t *)calloc(sVar1 + 1,4);
  if (__dest == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wcscpy(__dest,__s);
  FUN_0010195e(__dest);
  free(__dest);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101444) */
/* WARNING: Removing unreachable block (ram,0x00101450) */

void FUN_00101420(void)

{
  return;
}




void FUN_00101bc8(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_001018c9(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101938("Calling good()...");
  FUN_00101896();
  FUN_00101938("Finished good()");
  FUN_00101938("Calling bad()...");
  FUN_001014a9();
  FUN_00101938("Finished bad()");
  return 0;
}




void FUN_0010195e(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00102068(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101ebc(void)

{
  return;
}




ulong FUN_00101c28(long param_1,ulong param_2,long param_3)

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




void FUN_00101b14(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101edd(void)

{
  return;
}




void FUN_00102123(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101a8f(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101ec7(void)

{
  return;
}




void FUN_00101efe(void)

{
  return;
}




void FUN_00101e4e(void)

{
  return;
}




void FUN_00101e6f(void)

{
  return;
}




void FUN_001021e0(void)

{
  return;
}




undefined8 FUN_00101e1a(void)

{
  return 0;
}




void FUN_00101f09(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001014a9(void)

{
  wchar_t *__s;
  size_t sVar1;
  wchar_t *__dest;
  
  __s = (wchar_t *)malloc(200);
  if (__s == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wmemset(__s,L'A',0x31);
  __s[0x31] = L'\0';
  sVar1 = strlen((char *)__s);
  __dest = (wchar_t *)calloc(sVar1 + 1,4);
  if (__dest == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wcscpy(__dest,__s);
  FUN_00101938(__dest);
  free(__dest);
  return;
}




void FUN_001019e4(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101e7a(void)

{
  return;
}




void FUN_00101eb1(void)

{
  return;
}




void FUN_00101ee8(void)

{
  return;
}




void FUN_0010170a(void)

{
  char *__s;
  size_t sVar1;
  char *__dest;
  
  __s = (char *)malloc(0x32);
  if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,0x31);
  __s[0x31] = '\0';
  sVar1 = strlen(__s);
  __dest = (char *)calloc(sVar1 + 1,1);
  if (__dest == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  strcpy(__dest,__s);
  FUN_00101938(__dest);
  free(__dest);
  return;
}




undefined8 FUN_00101e0b(void)

{
  return 1;
}




void FUN_00101990(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001011f0(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_00102142(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101e59(void)

{
  return;
}




void FUN_00101e90(void)

{
  return;
}




void FUN_00101ed2(void)

{
  return;
}




ulong FUN_00101d2c(long param_1,ulong param_2,long param_3)

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




void FUN_00101b95(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}



