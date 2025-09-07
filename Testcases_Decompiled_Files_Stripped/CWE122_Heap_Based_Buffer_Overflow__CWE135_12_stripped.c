
void FUN_00101b50(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101fca(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101afa(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101bd5(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102129(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101f0f(void)

{
  return;
}




void FUN_001014a9(void)

{
  int iVar1;
  size_t sVar2;
  wchar_t *pwVar3;
  wchar_t *local_40;
  
  iVar1 = FUN_00101eea();
  if (iVar1 == 0) {
    local_40 = (wchar_t *)malloc(0x32);
    if (local_40 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_40,0x41,0x31);
    *(undefined *)((long)local_40 + 0x31) = 0;
  }
  else {
    local_40 = (wchar_t *)malloc(200);
    if (local_40 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    wmemset(local_40,L'A',0x31);
    local_40[0x31] = L'\0';
  }
  iVar1 = FUN_00101eea();
  if (iVar1 == 0) {
    sVar2 = wcslen(local_40);
    pwVar3 = (wchar_t *)calloc(sVar2 + 1,4);
    if (pwVar3 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    wcscpy(pwVar3,local_40);
    FUN_00101a1f(pwVar3);
    free(pwVar3);
  }
  else {
    sVar2 = strlen((char *)local_40);
    pwVar3 = (wchar_t *)calloc(sVar2 + 1,4);
    if (pwVar3 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    wcscpy(pwVar3,local_40);
    FUN_001019f9(pwVar3);
    free(pwVar3);
  }
  return;
}




void FUN_00101f5c(void)

{
  return;
}




void FUN_00102203(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101a1f(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101f72(void)

{
  return;
}




void FUN_001019f9(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101c89(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101c28(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




ulong FUN_00101ce9(long param_1,ulong param_2,long param_3)

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




void FUN_001017da(void)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  char *local_40;
  
  iVar1 = FUN_00101eea();
  if (iVar1 == 0) {
    local_40 = (char *)malloc(0x32);
    if (local_40 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_40,0x41,0x31);
    local_40[0x31] = '\0';
  }
  else {
    local_40 = (char *)malloc(0x32);
    if (local_40 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_40,0x41,0x31);
    local_40[0x31] = '\0';
  }
  iVar1 = FUN_00101eea();
  if (iVar1 == 0) {
    sVar2 = strlen(local_40);
    pcVar3 = (char *)calloc(sVar2 + 1,1);
    if (pcVar3 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    strcpy(pcVar3,local_40);
    FUN_001019f9(pcVar3);
    free(pcVar3);
  }
  else {
    sVar2 = strlen(local_40);
    pcVar3 = (char *)calloc(sVar2 + 1,1);
    if (pcVar3 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    strcpy(pcVar3,local_40);
    FUN_001019f9(pcVar3);
    free(pcVar3);
  }
  return;
}




ulong FUN_00101ded(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_0010214c(undefined8 *param_1)

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




void FUN_00101f3b(void)

{
  return;
}




void FUN_001021e4(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101a79(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101b7b(undefined4 param_1)

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




void FUN_00101f7d(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101444) */
/* WARNING: Removing unreachable block (ram,0x00101450) */

void FUN_00101420(void)

{
  return;
}




void FUN_00101f1a(void)

{
  return;
}




void FUN_0010196b(void)

{
  FUN_0010163f();
  FUN_001017da();
  return;
}




undefined8 FUN_00101ecc(void)

{
  return 1;
}




void FUN_00101a51(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101aa5(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ef0)();
  return;
}




void FUN_00101f93(void)

{
  return;
}




void FUN_001021c5(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101c56(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101fb4(void)

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




/* WARNING: Removing unreachable block (ram,0x00101403) */
/* WARNING: Removing unreachable block (ram,0x0010140f) */

void FUN_001013f0(void)

{
  return;
}




void FUN_00101bfd(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101f9e(void)

{
  return;
}




undefined8 FUN_00102001(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101fca,local_18);
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




void FUN_00101f25(void)

{
  return;
}




void FUN_00101f46(void)

{
  return;
}




void FUN_00101f04(void)

{
  return;
}




bool FUN_001020ce(pthread_t *param_1)

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




void FUN_0010163f(void)

{
  int iVar1;
  size_t sVar2;
  wchar_t *pwVar3;
  wchar_t *local_40;
  
  iVar1 = FUN_00101eea();
  if (iVar1 == 0) {
    local_40 = (wchar_t *)malloc(200);
    if (local_40 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    wmemset(local_40,L'A',0x31);
    local_40[0x31] = L'\0';
  }
  else {
    local_40 = (wchar_t *)malloc(200);
    if (local_40 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    wmemset(local_40,L'A',0x31);
    local_40[0x31] = L'\0';
  }
  iVar1 = FUN_00101eea();
  if (iVar1 == 0) {
    sVar2 = wcslen(local_40);
    pwVar3 = (wchar_t *)calloc(sVar2 + 1,4);
    if (pwVar3 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    wcscpy(pwVar3,local_40);
    FUN_00101a1f(pwVar3);
    free(pwVar3);
  }
  else {
    sVar2 = wcslen(local_40);
    pwVar3 = (wchar_t *)calloc(sVar2 + 1,4);
    if (pwVar3 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    wcscpy(pwVar3,local_40);
    FUN_00101a1f(pwVar3);
    free(pwVar3);
  }
  return;
}




void FUN_00101b25(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101f51(void)

{
  return;
}




void FUN_00101f88(void)

{
  return;
}




void FUN_00101fbf(void)

{
  return;
}




undefined8 FUN_0010198a(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001019f9("Calling good()...");
  FUN_0010196b();
  FUN_001019f9("Finished good()");
  FUN_001019f9("Calling bad()...");
  FUN_001014a9();
  FUN_001019f9("Finished bad()");
  return 0;
}




int FUN_00101eea(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101acf(undefined8 param_1)

{
  printf("%ld\n",param_1);
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




void FUN_001022a0(void)

{
  return;
}




void FUN_00101f30(void)

{
  return;
}




void FUN_00101f67(void)

{
  return;
}




void FUN_00101fa9(void)

{
  return;
}




undefined8 FUN_00101edb(void)

{
  return 0;
}




void FUN_001011f0(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}



