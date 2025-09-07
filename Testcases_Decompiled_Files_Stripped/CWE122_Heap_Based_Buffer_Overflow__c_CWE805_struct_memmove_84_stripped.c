
void FUN_00101860(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




ulong FUN_00101bd4(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00101cc2(void)

{
  return 0;
}




int FUN_00101cd1(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f08)();
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e4) */
/* WARNING: Removing unreachable block (ram,0x001013f0) */

void FUN_001013c0(void)

{
  return;
}




void FUN_00101d43(void)

{
  return;
}




bool FUN_00101eb5(pthread_t *param_1)

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




void FUN_00101d2d(void)

{
  return;
}




void FUN_001019bc(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010155a(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(8);
                    /* try { // try from 00101588 to 0010158c has its CatchHandler @ 001015b1 */
  FUN_0010144a(pvVar1,0);
  if (pvVar1 != (void *)0x0) {
    FUN_00101496(pvVar1);
    operator_delete(pvVar1,8);
  }
  return;
}




void FUN_0010188c(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101a0f(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101d38(void)

{
  return;
}




void FUN_00101fea(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010190c(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101cf6(void)

{
  return;
}




void FUN_001016d0(long *param_1,long param_2)

{
  void *pvVar1;
  
  *param_1 = param_2;
  pvVar1 = malloc(800);
  *param_1 = (long)pvVar1;
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return;
}




undefined8 FUN_00101de8(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101db1,local_18);
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




void FUN_00101a3d(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101d64(void)

{
  return;
}




void FUN_001015da(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(8);
                    /* try { // try from 00101608 to 0010160c has its CatchHandler @ 00101631 */
  FUN_001016d0(pvVar1,0);
  if (pvVar1 != (void *)0x0) {
    FUN_0010171c(pvVar1);
    operator_delete(pvVar1,8);
  }
  return;
}




void FUN_00101496(undefined8 *param_1)

{
  long in_FS_OFFSET;
  ulong local_340;
  undefined4 local_338 [202];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_340 = 0; local_340 < 100; local_340 = local_340 + 1) {
    local_338[local_340 * 2] = 0;
    local_338[local_340 * 2 + 1] = 0;
  }
  memmove((void *)*param_1,local_338,800);
  FUN_00101a3d(*param_1);
  free((void *)*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void _FINI_0(void)

{
  if (DAT_00105020 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101390();
    DAT_00105020 = 1;
    return;
  }
  return;
}




void FUN_00101ceb(void)

{
  return;
}




void FUN_00101d59(void)

{
  return;
}




undefined8 FUN_0010166a(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001017e0("Calling good()...");
  FUN_0010165a();
  FUN_001017e0("Finished good()");
  FUN_001017e0("Calling bad()...");
  FUN_0010155a();
  FUN_001017e0("Finished bad()");
  return 0;
}




void FUN_00101a70(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101cb3(void)

{
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x001013a3) */
/* WARNING: Removing unreachable block (ram,0x001013af) */

void FUN_00101390(void)

{
  return;
}




void FUN_00101806(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001018e1(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102090(void)

{
  return;
}




void FUN_00101db1(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101d90(void)

{
  return;
}




void FUN_00101fac(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




ulong FUN_00101ad0(long param_1,ulong param_2,long param_3)

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




void FUN_00101d22(void)

{
  return;
}




void FUN_00101da6(void)

{
  return;
}




undefined8 FUN_00101f10(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101d01(void)

{
  return;
}




undefined8 FUN_00101f33(undefined8 *param_1)

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




void FUN_0010171c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  ulong local_340;
  undefined4 local_338 [202];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_340 = 0; local_340 < 100; local_340 = local_340 + 1) {
    local_338[local_340 * 2] = 0;
    local_338[local_340 * 2 + 1] = 0;
  }
  memmove((void *)*param_1,local_338,800);
  FUN_00101a3d(*param_1);
  free((void *)*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101838(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101962(undefined4 param_1)

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




void FUN_00101d0c(void)

{
  return;
}




void FUN_00101d17(void)

{
  return;
}




void FUN_00101d4e(void)

{
  return;
}




void FUN_00101937(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101d6f(void)

{
  return;
}




void FUN_00101d7a(void)

{
  return;
}




void FUN_00101fcb(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001018b6(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010165a(void)

{
  FUN_001015da();
  return;
}




void FUN_001017e0(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101d85(void)

{
  return;
}




void FUN_00102020(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_0010144a(long *param_1,long param_2)

{
  void *pvVar1;
  
  *param_1 = param_2;
  pvVar1 = malloc(400);
  *param_1 = (long)pvVar1;
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return;
}




void FUN_00101d9b(void)

{
  return;
}




void FUN_001019e4(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}



