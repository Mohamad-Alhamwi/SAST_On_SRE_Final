
ulong FUN_00101889(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001020b4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101190(void)

{
  (*(code *)PTR___cxa_finalize_00103ff8)();
  return;
}




void FUN_00101ac5(void)

{
  return;
}




bool FUN_00101c6e(pthread_t *param_1)

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




void FUN_00101775(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101e40(void)

{
  return;
}




void FUN_00101dd0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101829(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101cec(undefined8 *param_1)

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




void FUN_00101adb(void)

{
  return;
}




void FUN_00101ad0(void)

{
  return;
}




void FUN_00101645(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001016f0(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




ulong FUN_0010198d(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001020bc,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101b07(void)

{
  return;
}




void FUN_00101b49(void)

{
  return;
}




void FUN_00101b5f(void)

{
  return;
}




void FUN_00101b28(void)

{
  return;
}




void FUN_00101599(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101d65(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101b1d(void)

{
  return;
}




void FUN_001015bf(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101ae6(void)

{
  return;
}




undefined8 FUN_0010152a(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101599("Calling good()...");
  FUN_00101515();
  FUN_00101599("Finished good()");
  FUN_00101599("Calling bad()...");
  FUN_001013e9();
  FUN_00101599("Finished bad()");
  return 0;
}




void FUN_00101aba(void)

{
  return;
}




void FUN_00101b33(void)

{
  return;
}




void FUN_0010166f(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101aa4(void)

{
  return;
}




int FUN_00101a8a(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001013e9(void)

{
  void *__dest;
  
  __dest = malloc(0x20);
  if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *(char **)((long)__dest + 0x10) = "0123456789abcdef0123456789abcde";
  FUN_00101599(*(undefined8 *)((long)__dest + 0x10));
  memcpy(__dest,"0123456789abcdef0123456789abcde",0x20);
  *(undefined *)((long)__dest + 0xf) = 0;
  FUN_00101599(__dest);
  FUN_00101599(*(undefined8 *)((long)__dest + 0x10));
  free(__dest);
  return;
}




void FUN_00101b54(void)

{
  return;
}




void FUN_00101da3(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010169a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101af1(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f20)();
  return;
}




void FUN_00101619(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




void FUN_001016c5(undefined8 param_1)

{
  printf("%zu\n",param_1);
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




void FUN_0010171b(undefined4 param_1)

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




undefined8 FUN_00101ba1(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101b6a,local_18);
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




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




undefined8 FUN_00101a7b(void)

{
  return 0;
}




undefined8 FUN_00101cc9(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101b12(void)

{
  return;
}




void FUN_00101515(void)

{
  FUN_0010147f();
  return;
}




void FUN_0010147f(void)

{
  void *__dest;
  
  __dest = malloc(0x20);
  if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *(char **)((long)__dest + 0x10) = "0123456789abcdef0123456789abcde";
  FUN_00101599(*(undefined8 *)((long)__dest + 0x10));
  memcpy(__dest,"0123456789abcdef0123456789abcde",0x10);
  *(undefined *)((long)__dest + 0xf) = 0;
  FUN_00101599(__dest);
  FUN_00101599(*(undefined8 *)((long)__dest + 0x10));
  free(__dest);
  return;
}




void FUN_00101d84(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001015f1(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001017c8(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101b6a(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101afc(void)

{
  return;
}




undefined8 FUN_00101a6c(void)

{
  return 1;
}




void FUN_00101aaf(void)

{
  return;
}




void FUN_0010179d(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001017f6(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101b3e(void)

{
  return;
}



