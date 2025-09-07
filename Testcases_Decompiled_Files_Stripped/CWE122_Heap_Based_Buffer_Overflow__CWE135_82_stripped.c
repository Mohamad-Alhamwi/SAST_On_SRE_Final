
void FUN_0010279a(void)

{
  FUN_00102639();
  FUN_001026e7();
  return;
}




void FUN_00102ecf(void)

{
  return;
}




void FUN_00102a70(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102bc8(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103190(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102af0(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001028bc(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  char *__dest;
  
  sVar1 = strlen(param_2);
  __dest = (char *)calloc(sVar1 + 1,1);
  if (__dest == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  strcpy(__dest,param_2);
  FUN_001029c4(__dest);
  free(__dest);
  return;
}




void FUN_00102f69(void)

{
  return;
}




void FUN_00103200(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00102e97(void)

{
  return 1;
}




void FUN_001029c4(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102b46(undefined4 param_1)

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




void FUN_00102a9a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001024a4) */
/* WARNING: Removing unreachable block (ram,0x001024b0) */

void FUN_00102480(void)

{
  return;
}




ulong FUN_00102cb4(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00104290,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102f27(void)

{
  return;
}




ulong FUN_00102db8(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00104298,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102639(void)

{
  void *__s;
  undefined8 *puVar1;
  
  __s = malloc(0x32);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,0x31);
  *(undefined *)((long)__s + 0x31) = 0;
  puVar1 = (undefined8 *)operator_new(8);
  FUN_00102860(puVar1);
  (**(code **)*puVar1)(puVar1,__s);
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1,8);
  }
  return;
}




undefined8 FUN_00102fcc(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102f95,local_18);
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




void FUN_00102f11(void)

{
  return;
}




void FUN_00102f53(void)

{
  return;
}




void FUN_00102938(undefined8 param_1,wchar_t *param_2)

{
  size_t sVar1;
  void *__dest;
  
  sVar1 = wcslen(param_2);
  __dest = calloc(sVar1 + 1,4);
  if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memcpy(__dest,param_2,(sVar1 + 1) * 4);
  FUN_001029ea(__dest);
  free(__dest);
  return;
}




void FUN_001031ce(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00106ed8)();
  return;
}




void FUN_00102f95(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102ac5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00107018 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00102450();
    DAT_00107018 = 1;
    return;
  }
  return;
}




void FUN_00102c54(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102814(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_00106c80;
  return;
}




void FUN_00102860(undefined8 *param_1)

{
  FUN_00102814(param_1);
  *param_1 = &PTR_FUN_00106c28;
  return;
}




void FUN_00102f32(void)

{
  return;
}




void FUN_00102bf3(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_001030f4(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010288e(undefined8 *param_1)

{
  FUN_00102814(param_1);
  *param_1 = &PTR_FUN_00106c40;
  return;
}




void FUN_00102f5e(void)

{
  return;
}




void FUN_0010250a(undefined8 param_1,wchar_t *param_2)

{
  size_t sVar1;
  wchar_t *__dest;
  
  sVar1 = strlen((char *)param_2);
  __dest = (wchar_t *)calloc(sVar1 + 1,4);
  if (__dest == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wcscpy(__dest,param_2);
  FUN_001029c4(__dest);
  free(__dest);
  return;
}




void FUN_00102832(undefined8 *param_1)

{
  FUN_00102814(param_1);
  *param_1 = &PTR_FUN_00106c10;
  return;
}




void FUN_00102eda(void)

{
  return;
}




void FUN_00102f74(void)

{
  return;
}




void FUN_001031af(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102ba0(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102ea6(void)

{
  return 0;
}




void FUN_00102f48(void)

{
  return;
}




void FUN_00102ee5(void)

{
  return;
}




void FUN_001029ea(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102ef0(void)

{
  return;
}




void FUN_00102efb(void)

{
  return;
}




void FUN_00102f3d(void)

{
  return;
}




void FUN_001026e7(void)

{
  wchar_t *__s;
  undefined8 *puVar1;
  
  __s = (wchar_t *)malloc(200);
  if (__s == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wmemset(__s,L'A',0x31);
  __s[0x31] = L'\0';
  puVar1 = (undefined8 *)operator_new(8);
  FUN_0010288e(puVar1);
  (**(code **)*puVar1)(puVar1,__s);
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1,8);
  }
  return;
}




void FUN_00102f8a(void)

{
  return;
}




void FUN_00103270(void)

{
  return;
}




undefined8 FUN_001027af(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001029c4("Calling good()...");
  FUN_0010279a();
  FUN_001029c4("Finished good()");
  FUN_001029c4("Calling bad()...");
  FUN_00102586();
  FUN_001029c4("Finished bad()");
  return 0;
}




void FUN_00102c21(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




bool FUN_00103099(pthread_t *param_1)

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




void FUN_00102f1c(void)

{
  return;
}




undefined8 FUN_00103117(undefined8 *param_1)

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




/* WARNING: Removing unreachable block (ram,0x00102463) */
/* WARNING: Removing unreachable block (ram,0x0010246f) */

void FUN_00102450(void)

{
  return;
}




int FUN_00102eb5(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102f06(void)

{
  return;
}




void FUN_00102586(void)

{
  wchar_t *__s;
  undefined8 *puVar1;
  
  __s = (wchar_t *)malloc(200);
  if (__s == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wmemset(__s,L'A',0x31);
  __s[0x31] = L'\0';
  puVar1 = (undefined8 *)operator_new(8);
  FUN_00102832(puVar1);
  (**(code **)*puVar1)(puVar1,__s);
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1,8);
  }
  return;
}




void FUN_00102a44(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102f7f(void)

{
  return;
}




void FUN_00102b1b(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102a1c(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}



