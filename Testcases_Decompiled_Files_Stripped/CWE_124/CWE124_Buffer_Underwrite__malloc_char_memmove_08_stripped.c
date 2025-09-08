
void FUN_00101956(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101752(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001019e2(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101d18(void)

{
  return;
}




undefined8 FUN_00101c25(void)

{
  return 1;
}




void FUN_001018d4(undefined4 param_1)

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




void FUN_00101f5c(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101427(void)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_88;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (void *)0x0;
  iVar1 = FUN_00101409();
  if (iVar1 != 0) {
    local_88 = malloc(100);
    if (local_88 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_88,0x41,99);
    *(undefined *)((long)local_88 + 99) = 0;
    local_88 = (void *)((long)local_88 + -8);
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(local_88,local_78,100);
  *(undefined *)((long)local_88 + 99) = 0;
  FUN_00101752(local_88);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101ce1(void)

{
  return;
}




void FUN_001015eb(void)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_88;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (void *)0x0;
  iVar1 = FUN_00101409();
  if (iVar1 != 0) {
    local_88 = malloc(100);
    if (local_88 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_88,0x41,99);
    *(undefined *)((long)local_88 + 99) = 0;
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(local_88,local_78,100);
  *(undefined *)((long)local_88 + 99) = 0;
  FUN_00101752(local_88);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010187e(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101d0d(void)

{
  return;
}




void FUN_00101c7e(void)

{
  return;
}




void FUN_00102000(void)

{
  return;
}




void FUN_00101f90(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001011a0(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_00101c9f(void)

{
  return;
}




void FUN_00101ccb(void)

{
  return;
}




void FUN_00101d23(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001016c4(void)

{
  FUN_00101504();
  FUN_001015eb();
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101363) */
/* WARNING: Removing unreachable block (ram,0x0010136f) */

void FUN_00101350(void)

{
  return;
}




undefined8 FUN_00101409(void)

{
  return 1;
}




undefined8 FUN_001016e3(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101752("Calling good()...");
  FUN_001016c4();
  FUN_00101752("Finished good()");
  FUN_00101752("Calling bad()...");
  FUN_00101427();
  FUN_00101752("Finished bad()");
  return 0;
}




undefined8 FUN_00101c34(void)

{
  return 0;
}




void FUN_001017d2(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101981(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a4) */
/* WARNING: Removing unreachable block (ram,0x001013b0) */

void FUN_00101380(void)

{
  return;
}




void FUN_00101f3d(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001017fe(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




ulong FUN_00101a42(long param_1,ulong param_2,long param_3)

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




void FUN_001017aa(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101c89(void)

{
  return;
}




void FUN_00101caa(void)

{
  return;
}




undefined8 FUN_00101ea5(undefined8 *param_1)

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




undefined8 FUN_00101e82(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001019af(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101504(void)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_88;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (void *)0x0;
  iVar1 = FUN_00101418();
  if (iVar1 == 0) {
    local_88 = malloc(100);
    if (local_88 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(local_88,0x41,99);
    *(undefined *)((long)local_88 + 99) = 0;
  }
  else {
    FUN_00101752("Benign, fixed string");
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(local_88,local_78,100);
  *(undefined *)((long)local_88 + 99) = 0;
  FUN_00101752(local_88);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010192e(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101cb5(void)

{
  return;
}




ulong FUN_00101b46(long param_1,ulong param_2,long param_3)

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




void FUN_00101778(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101c94(void)

{
  return;
}




void FUN_00101cc0(void)

{
  return;
}




void FUN_00101c68(void)

{
  return;
}




void FUN_00101cd6(void)

{
  return;
}




bool FUN_00101e27(pthread_t *param_1)

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




void FUN_00101020(void)

{
  (*(code *)PTR_00104f18)();
  return;
}




int FUN_00101c43(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001018a9(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101418(void)

{
  return 0;
}




void FUN_00101853(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_001011a0(PTR_LOOP_00105008);
    }
    FUN_00101350();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_00101828(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101c5d(void)

{
  return;
}




void FUN_00101cf7(void)

{
  return;
}




undefined8 FUN_00101d5a(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101d23,local_18);
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




void FUN_00101f1e(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101c73(void)

{
  return;
}




void FUN_00101cec(void)

{
  return;
}




void FUN_00101d02(void)

{
  return;
}



