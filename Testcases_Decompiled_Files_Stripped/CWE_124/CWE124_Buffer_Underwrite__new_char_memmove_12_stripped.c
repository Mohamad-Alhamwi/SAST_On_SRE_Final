
void FUN_00101bb9(void)

{
  return;
}




void FUN_00101830(undefined4 param_1)

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




void FUN_00101bda(void)

{
  return;
}




void FUN_00101c53(void)

{
  return;
}




void FUN_00101c7f(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101bfb(void)

{
  return;
}




undefined8 FUN_00101b90(void)

{
  return 0;
}




void FUN_001016d4(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010175a(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101e99(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001017af(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_00101aa2(long param_1,ulong param_2,long param_3)

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




/* WARNING: Removing unreachable block (ram,0x001013a4) */
/* WARNING: Removing unreachable block (ram,0x001013b0) */

void FUN_00101380(void)

{
  return;
}




void FUN_00101409(void)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_90;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_00101b9f();
  if (iVar1 == 0) {
    local_90 = operator_new__(100);
    memset(local_90,0x41,99);
    *(undefined *)((long)local_90 + 99) = 0;
  }
  else {
    local_90 = operator_new__(100);
    memset(local_90,0x41,99);
    *(undefined *)((long)local_90 + 99) = 0;
    local_90 = (void *)((long)local_90 + -8);
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(local_90,local_78,100);
  *(undefined *)((long)local_90 + 99) = 0;
  FUN_001016ae(local_90);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void _FINI_0(void)

{
  if (DAT_00104018 == '\0') {
    if (PTR___cxa_finalize_00103fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104008);
    }
    FUN_00101350();
    DAT_00104018 = 1;
    return;
  }
  return;
}




void FUN_00101c3d(void)

{
  return;
}




void FUN_001017da(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101639(void)

{
  FUN_00101523();
  return;
}




void FUN_00101706(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101523(void)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_90;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_00101b9f();
  if (iVar1 == 0) {
    local_90 = operator_new__(100);
    memset(local_90,0x41,99);
    *(undefined *)((long)local_90 + 99) = 0;
  }
  else {
    local_90 = operator_new__(100);
    memset(local_90,0x41,99);
    *(undefined *)((long)local_90 + 99) = 0;
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(local_90,local_78,100);
  *(undefined *)((long)local_90 + 99) = 0;
  FUN_001016ae(local_90);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101805(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101c06(void)

{
  return;
}




void FUN_001018dd(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101bc4(void)

{
  return;
}




void FUN_00101c69(void)

{
  return;
}




void FUN_00101c5e(void)

{
  return;
}




void FUN_001016ae(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101363) */
/* WARNING: Removing unreachable block (ram,0x0010136f) */

void FUN_00101350(void)

{
  return;
}




void FUN_001018b2(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010190b(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101be5(void)

{
  return;
}




void FUN_00101c48(void)

{
  return;
}




void FUN_00101bcf(void)

{
  return;
}




void FUN_00101784(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




int FUN_00101b9f(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00101cb6(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101c7f,local_18);
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




bool FUN_00101d83(pthread_t *param_1)

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




undefined8 FUN_00101dde(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101bf0(void)

{
  return;
}




void FUN_0010188a(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101c74(void)

{
  return;
}




void FUN_00101ef0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101eb8(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101c27(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f18)();
  return;
}




void FUN_00101c11(void)

{
  return;
}




undefined8 FUN_00101b81(void)

{
  return 1;
}




void FUN_0010172e(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101649(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001016ae("Calling good()...");
  FUN_00101639();
  FUN_001016ae("Finished good()");
  FUN_001016ae("Calling bad()...");
  FUN_00101409();
  FUN_001016ae("Finished bad()");
  return 0;
}




ulong FUN_0010199e(long param_1,ulong param_2,long param_3)

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




void FUN_00101f60(void)

{
  return;
}




undefined8 FUN_00101e01(undefined8 *param_1)

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




void FUN_0010193e(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101c1c(void)

{
  return;
}




void FUN_00101c32(void)

{
  return;
}




void FUN_00101e7a(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}



