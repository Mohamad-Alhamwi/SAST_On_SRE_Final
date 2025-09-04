
void FUN_001016eb(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00104018 == '\0') {
    if (PTR___cxa_finalize_00103ff8 != (undefined *)0x0) {
      FUN_00101180(PTR_LOOP_00104008);
    }
    FUN_00101310();
    DAT_00104018 = 1;
    return;
  }
  return;
}




undefined8 FUN_00101d92(undefined8 *param_1)

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




bool FUN_00101d14(pthread_t *param_1)

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




void FUN_00101e2a(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010186e(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101ba2(void)

{
  return;
}




undefined8 FUN_001015d0(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010163f("Calling good()...");
  FUN_001015a7();
  FUN_0010163f("Finished good()");
  FUN_0010163f("Calling bad()...");
  FUN_001013f2();
  FUN_0010163f("Finished bad()");
  return 0;
}




void FUN_00101be4(void)

{
  return;
}




void FUN_00101bd9(void)

{
  return;
}




void FUN_001016bf(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101e80(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101bb8(void)

{
  return;
}




void FUN_001018cf(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010189c(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101473(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  DAT_00104020 = 0;
  FUN_0010144a(__ptr);
  return;
}




void FUN_0010155b(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  DAT_00104028 = 1;
  FUN_00101532(pvVar1);
  return;
}




void FUN_00101715(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101b21(void)

{
  return 0;
}




void FUN_00101b76(void)

{
  return;
}




void FUN_00101bfa(void)

{
  return;
}




void FUN_00101b8c(void)

{
  return;
}




void FUN_00101e0b(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101b55(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101323) */
/* WARNING: Removing unreachable block (ram,0x0010132f) */

void FUN_00101310(void)

{
  return;
}




void FUN_00101bc3(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101364) */
/* WARNING: Removing unreachable block (ram,0x00101370) */

void FUN_00101340(void)

{
  return;
}




void FUN_00101b4a(void)

{
  return;
}




void FUN_00101bef(void)

{
  return;
}




void FUN_00101c05(void)

{
  return;
}




void FUN_001013c9(void *param_1)

{
  if (DAT_0010401c != 0) {
    free(param_1);
  }
  return;
}




ulong FUN_0010192f(long param_1,ulong param_2,long param_3)

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




void FUN_00101180(void)

{
  (*(code *)PTR___cxa_finalize_00103ff8)();
  return;
}




void FUN_00101843(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101b60(void)

{
  return;
}




void FUN_00101ef0(void)

{
  return;
}




void FUN_001014cb(void)

{
  return;
}




void FUN_001017c1(undefined4 param_1)

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




void FUN_00101796(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101b81(void)

{
  return;
}




void FUN_00101e49(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001014da(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  _DAT_00104024 = 1;
  FUN_001014cb(__ptr);
  return;
}




ulong FUN_00101a33(long param_1,ulong param_2,long param_3)

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




void FUN_0010144a(void)

{
  if (DAT_00104020 != 0) {
    FUN_0010163f("Benign, fixed string");
  }
  return;
}




void FUN_00101532(void *param_1)

{
  if (DAT_00104028 != 0) {
    free(param_1);
  }
  return;
}




void FUN_001015a7(void)

{
  FUN_00101473();
  FUN_001014da();
  FUN_0010155b();
  return;
}




void FUN_0010176b(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00101c47(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101c10,local_18);
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




void FUN_00101bad(void)

{
  return;
}




int FUN_00101b30(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f28)();
  return;
}




undefined8 FUN_00101d6f(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101bce(void)

{
  return;
}




void FUN_00101c10(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001013f2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  DAT_0010401c = 1;
  FUN_001013c9(__ptr);
  return;
}




void FUN_00101665(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101b97(void)

{
  return;
}




undefined8 FUN_00101b12(void)

{
  return 1;
}




void FUN_00101740(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010181b(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010163f(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101697(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101b6b(void)

{
  return;
}



