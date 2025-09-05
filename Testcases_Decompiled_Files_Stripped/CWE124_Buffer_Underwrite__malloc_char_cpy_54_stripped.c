
undefined8 FUN_00101be1(void)

{
  return 0;
}




ulong FUN_00101af3(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00102098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c0a(void)

{
  return;
}




void FUN_00101c83(void)

{
  return;
}




void FUN_00101428(undefined8 param_1)

{
  FUN_00101466(param_1);
  return;
}




void FUN_001017d5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101cd0(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101903(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




bool FUN_00101dd4(pthread_t *param_1)

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




void FUN_001018db(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101c36(void)

{
  return;
}




void FUN_00101c20(void)

{
  return;
}




void FUN_00101c41(void)

{
  return;
}




void FUN_0010182b(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101c4c(void)

{
  return;
}




void FUN_00101466(undefined8 param_1)

{
  FUN_001016e0(param_1);
  return;
}




void FUN_00101caf(void)

{
  return;
}




void FUN_00101447(undefined8 param_1)

{
  FUN_001016c1(param_1);
  return;
}




void FUN_0010195c(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f18)();
  return;
}




undefined8 FUN_00101574(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001016ff("Calling good()...");
  FUN_0010155f();
  FUN_001016ff("Finished good()");
  FUN_001016ff("Calling bad()...");
  FUN_00101485();
  FUN_001016ff("Finished bad()");
  return 0;
}




int FUN_00101bf0(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101725(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00101e2f(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010177f(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101c8e(void)

{
  return;
}




void FUN_001016c1(undefined8 param_1)

{
  FUN_001015e3(param_1);
  return;
}




void FUN_00101856(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101652(char *param_1)

{
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(param_1,local_78);
  FUN_001016ff(param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101c57(void)

{
  return;
}




void FUN_0010192e(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_0010198f(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101485(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  FUN_00101409((long)__s + -8);
  return;
}




void FUN_001016e0(undefined8 param_1)

{
  FUN_00101652(param_1);
  return;
}




void FUN_00101ecb(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101409(undefined8 param_1)

{
  FUN_00101447(param_1);
  return;
}




void FUN_00101c2b(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a4) */
/* WARNING: Removing unreachable block (ram,0x001013b0) */

void FUN_00101380(void)

{
  return;
}




void FUN_00101f40(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




/* WARNING: Removing unreachable block (ram,0x00101363) */
/* WARNING: Removing unreachable block (ram,0x0010136f) */

void FUN_00101350(void)

{
  return;
}




void FUN_00101757(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101c15(void)

{
  return;
}




void FUN_00101eea(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101c99(void)

{
  return;
}




void FUN_00101cba(void)

{
  return;
}




void FUN_001014f4(void)

{
  void *__s;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  FUN_00101428(__s);
  return;
}




void FUN_00101c78(void)

{
  return;
}




void FUN_00101800(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001015e3(char *param_1)

{
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(param_1,local_78);
  FUN_001016ff(param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101bd2(void)

{
  return 1;
}




void FUN_00101cc5(void)

{
  return;
}




undefined8 FUN_00101e52(undefined8 *param_1)

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




void FUN_00101fb0(void)

{
  return;
}




void FUN_00101881(undefined4 param_1)

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




void FUN_00101c6d(void)

{
  return;
}




ulong FUN_001019ef(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00102090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001017ab(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010155f(void)

{
  FUN_001014f4();
  return;
}




void FUN_001011a0(void)

{
  (*(code *)PTR___cxa_finalize_00103ff8)();
  return;
}




void _FINI_0(void)

{
  if (DAT_00104018 == '\0') {
    if (PTR___cxa_finalize_00103ff8 != (undefined *)0x0) {
      FUN_001011a0(PTR_LOOP_00104008);
    }
    FUN_00101350();
    DAT_00104018 = 1;
    return;
  }
  return;
}




void FUN_00101ca4(void)

{
  return;
}




undefined8 FUN_00101d07(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101cd0,local_18);
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




void FUN_00101f09(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101c62(void)

{
  return;
}




void FUN_001016ff(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}



