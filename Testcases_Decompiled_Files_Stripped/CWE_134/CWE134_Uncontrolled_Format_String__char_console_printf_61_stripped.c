
void FUN_00101a77(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101fc6(undefined8 *param_1)

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




void FUN_001019f5(undefined4 param_1)

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




void FUN_00101ad0(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010207d(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101db5(void)

{
  return;
}




void FUN_001017e5(void)

{
  FUN_00101666();
  FUN_00101728();
  return;
}




void FUN_00101e02(void)

{
  return;
}




void FUN_0010191f(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101e18(void)

{
  return;
}




void FUN_001018f3(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101d55(void)

{
  return 0;
}




ulong FUN_00101b63(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030a0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




int FUN_00101d64(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101873(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101d7e(void)

{
  return;
}




void FUN_001020b0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101de1(void)

{
  return;
}




void FUN_00101974(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101aa2(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




char * FUN_001014df(char *param_1)

{
  size_t sVar1;
  char *pcVar2;
  
  sVar1 = strlen(param_1);
  if (1 < 100 - sVar1) {
    pcVar2 = fgets(param_1 + sVar1,100 - (int)sVar1,stdin);
    if (pcVar2 == (char *)0x0) {
      FUN_00101873("fgets() failed");
      param_1[sVar1] = '\0';
    }
    else {
      sVar1 = strlen(param_1);
      if ((sVar1 != 0) && (param_1[sVar1 - 1] == '\n')) {
        param_1[sVar1 - 1] = '\0';
      }
    }
  }
  return param_1;
}




void FUN_00101e23(void)

{
  return;
}




void FUN_00101666(void)

{
  char *__format;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  __format = (char *)FUN_001014ae(&local_78);
  printf(__format);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101dc0(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




void FUN_00101899(long param_1)

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




void FUN_00101d89(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




void FUN_00101949(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010199f(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




ulong FUN_00101c67(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




char * FUN_001013e9(char *param_1)

{
  size_t sVar1;
  char *pcVar2;
  
  sVar1 = strlen(param_1);
  if (1 < 100 - sVar1) {
    pcVar2 = fgets(param_1 + sVar1,100 - (int)sVar1,stdin);
    if (pcVar2 == (char *)0x0) {
      FUN_00101873("fgets() failed");
      param_1[sVar1] = '\0';
    }
    else {
      sVar1 = strlen(param_1);
      if ((sVar1 != 0) && (param_1[sVar1 - 1] == '\n')) {
        param_1[sVar1 - 1] = '\0';
      }
    }
  }
  return param_1;
}




void FUN_00101e39(void)

{
  return;
}




void FUN_00102120(void)

{
  return;
}




undefined8 FUN_00101d46(void)

{
  return 1;
}




bool FUN_00101f48(pthread_t *param_1)

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




void FUN_001015a4(void)

{
  char *__format;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  __format = (char *)FUN_001013e9(&local_78);
  printf(__format);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b03(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101e44(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010203f(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101dcb(void)

{
  return;
}




void FUN_00101dec(void)

{
  return;
}




void FUN_00101daa(void)

{
  return;
}




void FUN_0010205e(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00101804(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101873("Calling good()...");
  FUN_001017e5();
  FUN_00101873("Finished good()");
  FUN_00101873("Calling bad()...");
  FUN_001015a4();
  FUN_00101873("Finished bad()");
  return 0;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f20)();
  return;
}




void FUN_00101a4f(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101df7(void)

{
  return;
}




void FUN_00101e2e(void)

{
  return;
}




undefined8 FUN_00101fa3(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001018cb(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101d9f(void)

{
  return;
}




void FUN_001019ca(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
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




void FUN_00101728(void)

{
  char *__s;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  __s = (char *)FUN_001014df(&local_78);
  puts(__s);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101dd6(void)

{
  return;
}




void FUN_00101e0d(void)

{
  return;
}




undefined8 FUN_00101e7b(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101e44,local_18);
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




void FUN_00101d94(void)

{
  return;
}




undefined8 * FUN_001014ae(undefined8 *param_1)

{
  *param_1 = 0x7274736465786966;
  param_1[1] = 0x74736574676e69;
  return param_1;
}



