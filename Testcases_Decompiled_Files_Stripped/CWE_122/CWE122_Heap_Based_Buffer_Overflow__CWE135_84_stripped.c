
void FUN_00101b2c(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101fb0(void)

{
  return;
}




int FUN_00101ef1(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101f4d(void)

{
  return;
}




void FUN_00101f21(void)

{
  return;
}




void FUN_00101c5d(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101f8f(void)

{
  return;
}




ulong FUN_00101cf0(long param_1,ulong param_2,long param_3)

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




void FUN_00101f37(void)

{
  return;
}




void FUN_00101f0b(void)

{
  return;
}




void FUN_00101a26(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101f79(void)

{
  return;
}




void FUN_001021cc(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101f84(void)

{
  return;
}




void FUN_001016aa(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(8);
                    /* try { // try from 001016d8 to 001016dc has its CatchHandler @ 00101701 */
  FUN_00101914(pvVar1,0);
  if (pvVar1 != (void *)0x0) {
    FUN_00101982(pvVar1);
    operator_delete(pvVar1,8);
  }
  return;
}




void FUN_00101ad6(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102130(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001022b0(void)

{
  return;
}




void FUN_00101c90(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101914(undefined8 *param_1,undefined8 param_2)

{
  void *__s;
  
  *param_1 = param_2;
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




void FUN_0010159c(undefined8 *param_1)

{
  size_t sVar1;
  void *__dest;
  
  sVar1 = wcslen((wchar_t *)*param_1);
  __dest = calloc(sVar1 + 1,4);
  if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memcpy(__dest,(void *)*param_1,(sVar1 + 1) * 4);
  FUN_00101a26(__dest);
  free(__dest);
  return;
}




void FUN_00101f16(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




void FUN_00101a58(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101f6e(void)

{
  return;
}




void FUN_0010152a(undefined8 *param_1,undefined8 param_2)

{
  wchar_t *__s;
  
  *param_1 = param_2;
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




void FUN_00101b82(undefined4 param_1)

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




void FUN_00101c04(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101982(undefined8 *param_1)

{
  size_t sVar1;
  char *__dest;
  
  sVar1 = strlen((char *)*param_1);
  __dest = (char *)calloc(sVar1 + 1,1);
  if (__dest == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  strcpy(__dest,(char *)*param_1);
  FUN_00101a00(__dest);
  free(__dest);
  return;
}




void FUN_001021eb(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_001017bf(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101a00("Calling good()...");
  FUN_001017aa();
  FUN_00101a00("Finished good()");
  FUN_00101a00("Calling bad()...");
  FUN_0010162a();
  FUN_00101a00("Finished bad()");
  return 0;
}




void FUN_001017aa(void)

{
  FUN_001016aa();
  FUN_0010172a();
  return;
}




void FUN_00101f58(void)

{
  return;
}




void FUN_00101c2f(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101a80(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101bdc(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101fbb(void)

{
  return;
}




void FUN_00101896(undefined8 *param_1)

{
  size_t sVar1;
  wchar_t *__dest;
  
  sVar1 = strlen((char *)*param_1);
  __dest = (wchar_t *)calloc(sVar1 + 1,4);
  if (__dest == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wcscpy(__dest,(wchar_t *)*param_1);
  FUN_00101a00(__dest);
  free(__dest);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ed0)();
  return;
}




void FUN_00101824(undefined8 *param_1,undefined8 param_2)

{
  wchar_t *__s;
  
  *param_1 = param_2;
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




void FUN_00101f42(void)

{
  return;
}




void FUN_00101f9a(void)

{
  return;
}




void FUN_00102240(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101fc6(void)

{
  return;
}




ulong FUN_00101df4(long param_1,ulong param_2,long param_3)

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




void FUN_00101fd1(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00102008(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101fd1,local_18);
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




void FUN_0010220a(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101b01(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00105020 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101470();
    DAT_00105020 = 1;
    return;
  }
  return;
}




void FUN_00101b57(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010162a(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(8);
                    /* try { // try from 00101658 to 0010165c has its CatchHandler @ 00101681 */
  FUN_00101824(pvVar1,0);
  if (pvVar1 != (void *)0x0) {
    FUN_00101896(pvVar1);
    operator_delete(pvVar1,8);
  }
  return;
}




void FUN_00101f63(void)

{
  return;
}




undefined8 FUN_00102153(undefined8 *param_1)

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




void FUN_00101a00(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101fa5(void)

{
  return;
}




bool FUN_001020d5(pthread_t *param_1)

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




void FUN_00101aac(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00101ee2(void)

{
  return 0;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




void FUN_0010172a(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(8);
                    /* try { // try from 00101758 to 0010175c has its CatchHandler @ 00101781 */
  FUN_0010152a(pvVar1,0);
  if (pvVar1 != (void *)0x0) {
    FUN_0010159c(pvVar1);
    operator_delete(pvVar1,8);
  }
  return;
}




void FUN_00101f2c(void)

{
  return;
}




undefined8 FUN_00101ed3(void)

{
  return 1;
}



