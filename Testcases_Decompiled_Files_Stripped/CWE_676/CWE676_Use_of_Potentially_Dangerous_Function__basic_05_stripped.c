
/* WARNING: Removing unreachable block (ram,0x00101363) */
/* WARNING: Removing unreachable block (ram,0x0010136f) */

void FUN_00101350(void)

{
  return;
}




void FUN_001016bc(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101710(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010173a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001018f4(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101ea0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _DT_INIT();
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 2);
  return;
}




void FUN_00101ba6(void)

{
  return;
}




void FUN_00101893(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_0010156b(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101664("Calling good()...");
  FUN_00101556();
  FUN_00101664("Finished good()");
  FUN_00101664("Calling bad()...");
  FUN_00101409();
  FUN_00101664("Finished bad()");
  return 0;
}




void FUN_00101c35(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




/* WARNING: Removing unreachable block (ram,0x001013a4) */
/* WARNING: Removing unreachable block (ram,0x001013b0) */

void FUN_00101380(void)

{
  return;
}




void FUN_00101c14(void)

{
  return;
}




void FUN_00101e6e(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void _INIT_1(void)

{
  FUN_001015d0(1,0xffff);
  return;
}




void FUN_001018c1(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101bd2(void)

{
  return;
}




void FUN_00101468(void)

{
  long in_FS_OFFSET;
  char local_1a [9];
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (DAT_00104140 == 0) {
    FUN_00101636(0x104030,10);
    std::operator>>((istream *)std::cin,local_1a);
    local_11 = 0;
    FUN_00101664(local_1a);
  }
  else {
    FUN_00101664("Benign, fixed string");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101790(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101be8(void)

{
  return;
}




void FUN_00101e30(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




bool FUN_00101d39(pthread_t *param_1)

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




void FUN_00101b9b(void)

{
  return;
}




void FUN_00101c1f(void)

{
  return;
}




undefined8 FUN_00101636(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return uVar1;
}




undefined8 FUN_00101b37(void)

{
  return 1;
}




undefined8 FUN_00101db7(undefined8 *param_1)

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




void FUN_00101765(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_00101a58(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001020ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101f10(void)

{
  return;
}




void FUN_00101664(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001016e4(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f10)();
  return;
}




void FUN_00101409(void)

{
  long in_FS_OFFSET;
  char local_1a [9];
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (DAT_00104010 != 0) {
    std::operator>>((istream *)std::cin,local_1a);
    local_11 = 0;
    FUN_00101664(local_1a);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101c2a(void)

{
  return;
}




void FUN_00101c09(void)

{
  return;
}




void FUN_00101b90(void)

{
  return;
}




void FUN_0010168a(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101868(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101b85(void)

{
  return;
}




void FUN_00101bb1(void)

{
  return;
}




undefined8 FUN_00101d94(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001017bb(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101bbc(void)

{
  return;
}




void FUN_00101556(void)

{
  FUN_00101468();
  FUN_001014e6();
  return;
}




void FUN_001017e6(undefined4 param_1)

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




void FUN_00101840(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




ulong FUN_00101954(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001020a4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101b46(void)

{
  return 0;
}




void FUN_001014e6(void)

{
  long in_FS_OFFSET;
  char local_1a [9];
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (DAT_00104010 != 0) {
    FUN_00101636(0x104030,10);
    std::operator>>((istream *)std::cin,local_1a);
    local_11 = 0;
    FUN_00101664(local_1a);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101bc7(void)

{
  return;
}




int FUN_00101b55(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101e4f(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00104138 == '\0') {
    if (PTR___cxa_finalize_00103fd0 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104008);
    }
    FUN_00101350();
    DAT_00104138 = 1;
    return;
  }
  return;
}




void FUN_00101bfe(void)

{
  return;
}




void FUN_00101bdd(void)

{
  return;
}




void FUN_00101b6f(void)

{
  return;
}




void FUN_00101bf3(void)

{
  return;
}




undefined8 FUN_00101c6c(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101c35,local_18);
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




void FUN_00101b7a(void)

{
  return;
}




void FUN_001015d0(int param_1,int param_2)

{
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    std::ios_base::Init::Init((Init *)&DAT_0010413c);
    __cxa_atexit(PTR__Init_00103ff8,&DAT_0010413c,&PTR_LOOP_00104008);
  }
  return;
}



