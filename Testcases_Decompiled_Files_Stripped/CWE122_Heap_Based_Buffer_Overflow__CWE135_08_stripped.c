
void FUN_00101bf8(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102124(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101b76(undefined4 param_1)

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




void FUN_00101c51(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001021df(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101f2b(void)

{
  return;
}




void FUN_00101952(void)

{
  FUN_001015ac();
  FUN_0010169f();
  FUN_00101784();
  FUN_00101872();
  return;
}




void FUN_00101f78(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101444) */
/* WARNING: Removing unreachable block (ram,0x00101450) */

void FUN_00101420(void)

{
  return;
}




void FUN_00101aa0(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101a74(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101ec7(void)

{
  return 1;
}




void FUN_00101f8e(void)

{
  return;
}




ulong FUN_00101ce4(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030a4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101ed6(void)

{
  return 0;
}




void FUN_001019f4(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




int FUN_00101ee5(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001021fe(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101f57(void)

{
  return;
}




void FUN_001022a0(void)

{
  return;
}




void FUN_00101af5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101c23(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ef0)();
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




void FUN_001015ac(void)

{
  int iVar1;
  size_t sVar2;
  wchar_t *__dest;
  wchar_t *local_28;
  
  local_28 = (wchar_t *)0x0;
  iVar1 = FUN_001014a9();
  if (iVar1 != 0) {
    local_28 = (wchar_t *)malloc(200);
    if (local_28 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    wmemset(local_28,L'A',0x31);
    local_28[0x31] = L'\0';
  }
  iVar1 = FUN_001014b8();
  if (iVar1 == 0) {
    sVar2 = wcslen(local_28);
    __dest = (wchar_t *)calloc(sVar2 + 1,4);
    if (__dest == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    wcscpy(__dest,local_28);
    FUN_00101a1a(__dest);
    free(__dest);
  }
  else {
    FUN_001019f4("Benign, fixed string");
  }
  return;
}




void FUN_00101f99(void)

{
  return;
}




void FUN_00101784(void)

{
  int iVar1;
  size_t sVar2;
  char *__dest;
  char *local_28;
  
  local_28 = (char *)0x0;
  iVar1 = FUN_001014b8();
  if (iVar1 == 0) {
    local_28 = (char *)malloc(0x32);
    if (local_28 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_28,0x41,0x31);
    local_28[0x31] = '\0';
  }
  else {
    FUN_001019f4("Benign, fixed string");
  }
  iVar1 = FUN_001014a9();
  if (iVar1 != 0) {
    sVar2 = strlen(local_28);
    __dest = (char *)calloc(sVar2 + 1,1);
    if (__dest == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    strcpy(__dest,local_28);
    FUN_001019f4(__dest);
    free(__dest);
  }
  return;
}




void FUN_00101f36(void)

{
  return;
}




undefined8 FUN_001014a9(void)

{
  return 1;
}




void FUN_00101a1a(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101403) */
/* WARNING: Removing unreachable block (ram,0x0010140f) */

void FUN_001013f0(void)

{
  return;
}




void FUN_00101eff(void)

{
  return;
}




void FUN_00101aca(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101b20(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_001014b8(void)

{
  return 0;
}




void FUN_00101faf(void)

{
  return;
}




void FUN_00102230(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




ulong FUN_00101de8(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101ffc(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101fc5,local_18);
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




void FUN_0010169f(void)

{
  int iVar1;
  size_t sVar2;
  wchar_t *__dest;
  wchar_t *local_28;
  
  local_28 = (wchar_t *)0x0;
  iVar1 = FUN_001014a9();
  if (iVar1 != 0) {
    local_28 = (wchar_t *)malloc(200);
    if (local_28 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    wmemset(local_28,L'A',0x31);
    local_28[0x31] = L'\0';
  }
  iVar1 = FUN_001014a9();
  if (iVar1 != 0) {
    sVar2 = wcslen(local_28);
    __dest = (wchar_t *)calloc(sVar2 + 1,4);
    if (__dest == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    wcscpy(__dest,local_28);
    FUN_00101a1a(__dest);
    free(__dest);
  }
  return;
}




void FUN_00101c84(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101fba(void)

{
  return;
}




undefined8 FUN_00102147(undefined8 *param_1)

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




void FUN_00101f41(void)

{
  return;
}




void FUN_00101f62(void)

{
  return;
}




void FUN_00101f20(void)

{
  return;
}




void FUN_001021c0(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00101985(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001019f4("Calling good()...");
  FUN_00101952();
  FUN_001019f4("Finished good()");
  FUN_001019f4("Calling bad()...");
  FUN_001014c7();
  FUN_001019f4("Finished bad()");
  return 0;
}




void FUN_001011f0(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_00101bd0(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101f6d(void)

{
  return;
}




void FUN_00101fa4(void)

{
  return;
}




bool FUN_001020c9(pthread_t *param_1)

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




void FUN_00101a4c(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101f15(void)

{
  return;
}




void FUN_00101b4b(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101872(void)

{
  int iVar1;
  size_t sVar2;
  char *__dest;
  char *local_28;
  
  local_28 = (char *)0x0;
  iVar1 = FUN_001014a9();
  if (iVar1 != 0) {
    local_28 = (char *)malloc(0x32);
    if (local_28 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_28,0x41,0x31);
    local_28[0x31] = '\0';
  }
  iVar1 = FUN_001014a9();
  if (iVar1 != 0) {
    sVar2 = strlen(local_28);
    __dest = (char *)calloc(sVar2 + 1,1);
    if (__dest == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    strcpy(__dest,local_28);
    FUN_001019f4(__dest);
    free(__dest);
  }
  return;
}




void FUN_00101f4c(void)

{
  return;
}




void FUN_00101f83(void)

{
  return;
}




void FUN_00101fc5(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101f0a(void)

{
  return;
}




void FUN_001014c7(void)

{
  int iVar1;
  size_t sVar2;
  wchar_t *__dest;
  wchar_t *local_28;
  
  local_28 = (wchar_t *)0x0;
  iVar1 = FUN_001014a9();
  if (iVar1 != 0) {
    local_28 = (wchar_t *)malloc(200);
    if (local_28 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    wmemset(local_28,L'A',0x31);
    local_28[0x31] = L'\0';
  }
  iVar1 = FUN_001014a9();
  if (iVar1 != 0) {
    sVar2 = strlen((char *)local_28);
    __dest = (wchar_t *)calloc(sVar2 + 1,4);
    if (__dest == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    wcscpy(__dest,local_28);
    FUN_001019f4(__dest);
    free(__dest);
  }
  return;
}



