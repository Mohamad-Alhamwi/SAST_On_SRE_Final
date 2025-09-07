
void FUN_00101a03(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




void FUN_00101cbc(void)

{
  return;
}




void FUN_00101d6c(void)

{
  return;
}




void FUN_001018fd(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101f72(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00101ef9(undefined8 *param_1)

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




void FUN_001019d5(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00101dae(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101d77,local_18);
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




void FUN_00101cd2(void)

{
  return;
}




void FUN_00101cc7(void)

{
  return;
}




void FUN_001017fe(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001018a7(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101a36(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101cfe(void)

{
  return;
}




void FUN_00101d40(void)

{
  return;
}




void FUN_00101fb0(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101d56(void)

{
  return;
}




void FUN_00101d1f(void)

{
  return;
}




void FUN_00101718(void)

{
  FUN_00101541();
  FUN_0010164c();
  return;
}




bool FUN_00101e7b(pthread_t *param_1)

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




void FUN_00101d14(void)

{
  return;
}




void FUN_00101f91(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101fe0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00101737(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001017a6("Calling good()...");
  FUN_00101718();
  FUN_001017a6("Finished good()");
  FUN_001017a6("Calling bad()...");
  FUN_00101428();
  FUN_001017a6("Finished bad()");
  return 0;
}




void FUN_00101cdd(void)

{
  return;
}




void FUN_0010164c(void)

{
  void *__ptr;
  size_t sVar1;
  long in_FS_OFFSET;
  ulong local_38;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  DAT_00105024 = 1;
  __ptr = (void *)FUN_0010160d(0);
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar1 = strlen(local_1b);
  for (local_38 = 0; local_38 < sVar1 + 1; local_38 = local_38 + 1) {
    *(char *)((long)__ptr + local_38) = local_1b[local_38];
  }
  FUN_001017a6(__ptr);
  free(__ptr);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101cb1(void)

{
  return;
}




void FUN_00101d2a(void)

{
  return;
}




void FUN_00101826(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101c88(void)

{
  return 0;
}




undefined8 FUN_00101c79(void)

{
  return 1;
}




void * FUN_001014f4(void *param_1)

{
  void *local_10;
  
  if (DAT_00105020 == 0) {
    local_10 = malloc(0xb);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    FUN_001017a6("Benign, fixed string");
    local_10 = param_1;
  }
  return local_10;
}




void FUN_00101d4b(void)

{
  return;
}




void FUN_00101852(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101190(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_00101ce8(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




void FUN_001017cc(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_00101190(PTR_LOOP_00105008);
    }
    FUN_00101330();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_0010187c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101428(void)

{
  void *__ptr;
  size_t sVar1;
  long in_FS_OFFSET;
  ulong local_38;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  DAT_0010501c = 1;
  __ptr = (void *)FUN_001013e9(0);
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar1 = strlen(local_1b);
  for (local_38 = 0; local_38 < sVar1 + 1; local_38 = local_38 + 1) {
    *(char *)((long)__ptr + local_38) = local_1b[local_38];
  }
  FUN_001017a6(__ptr);
  free(__ptr);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001018d2(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void * FUN_001013e9(void *param_1)

{
  undefined8 local_10;
  
  local_10 = param_1;
  if (DAT_0010501c != 0) {
    local_10 = malloc(10);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}




ulong FUN_00101b9a(long param_1,ulong param_2,long param_3)

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




void FUN_00101d77(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101d09(void)

{
  return;
}




void * FUN_0010160d(void *param_1)

{
  undefined8 local_10;
  
  local_10 = param_1;
  if (DAT_00105024 != 0) {
    local_10 = malloc(0xb);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}




void FUN_00101541(void)

{
  void *__ptr;
  size_t sVar1;
  long in_FS_OFFSET;
  ulong local_38;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  DAT_00105020 = 0;
  __ptr = (void *)FUN_001014f4(0);
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar1 = strlen(local_1b);
  for (local_38 = 0; local_38 < sVar1 + 1; local_38 = local_38 + 1) {
    *(char *)((long)__ptr + local_38) = local_1b[local_38];
  }
  FUN_001017a6(__ptr);
  free(__ptr);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101ed6(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102050(void)

{
  return;
}




void FUN_001017a6(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f20)();
  return;
}




void FUN_00101982(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101d61(void)

{
  return;
}




void FUN_00101cf3(void)

{
  return;
}




ulong FUN_00101a96(long param_1,ulong param_2,long param_3)

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




int FUN_00101c97(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101928(undefined4 param_1)

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




void FUN_001019aa(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101d35(void)

{
  return;
}



