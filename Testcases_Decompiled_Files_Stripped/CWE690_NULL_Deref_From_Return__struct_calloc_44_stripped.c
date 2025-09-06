
void FUN_00101a8f(void)

{
  return;
}




void FUN_0010157e(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101323) */
/* WARNING: Removing unreachable block (ram,0x0010132f) */

void FUN_00101310(void)

{
  return;
}




void FUN_00101ae7(void)

{
  return;
}




int FUN_00101a49(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_0010144b(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 1;
    param_1[1] = 1;
    FUN_001017b5(param_1);
    free(param_1);
  }
  return;
}




void FUN_00101a84(void)

{
  return;
}




void FUN_00101afd(void)

{
  return;
}




void FUN_00101af2(void)

{
  return;
}




void FUN_001017b5(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
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




undefined8 FUN_00101a2b(void)

{
  return 1;
}




void FUN_00101a9a(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f28)();
  return;
}




void FUN_00101b29(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101d43(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101d90(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00101c88(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001016da(undefined4 param_1)

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




bool FUN_00101c2d(pthread_t *param_1)

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




void FUN_00101734(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101b08(void)

{
  return;
}




void FUN_001016af(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101adc(void)

{
  return;
}




undefined8 FUN_00101cab(undefined8 *param_1)

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




void FUN_001017e8(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101ac6(void)

{
  return;
}




void FUN_00101409(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,8);
  FUN_001013c9(pvVar1);
  return;
}




void FUN_00101abb(void)

{
  return;
}




void FUN_0010162e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101d62(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




ulong FUN_00101848(long param_1,ulong param_2,long param_3)

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




void FUN_001014d4(void)

{
  FUN_00101492();
  return;
}




void FUN_00101b13(void)

{
  return;
}




undefined8 FUN_001014e9(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101558("Calling good()...");
  FUN_001014d4();
  FUN_00101558("Finished good()");
  FUN_00101558("Calling bad()...");
  FUN_00101409();
  FUN_00101558("Finished bad()");
  return 0;
}




void FUN_00101558(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001015b0(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101787(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101604(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




ulong FUN_0010194c(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00101a3a(void)

{
  return 0;
}




void FUN_001015d8(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101ab0(void)

{
  return;
}




undefined8 FUN_00101b60(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101b29,local_18);
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




void FUN_00101180(void)

{
  (*(code *)PTR___cxa_finalize_00103ff8)();
  return;
}




void FUN_00101684(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101659(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010175c(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001013c9(undefined4 *param_1)

{
  *param_1 = 1;
  param_1[1] = 1;
  FUN_001017b5(param_1);
  free(param_1);
  return;
}




void FUN_00101492(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,8);
  FUN_0010144b(pvVar1);
  return;
}




void FUN_00101a6e(void)

{
  return;
}




void FUN_00101e00(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101364) */
/* WARNING: Removing unreachable block (ram,0x00101370) */

void FUN_00101340(void)

{
  return;
}




void FUN_00101b1e(void)

{
  return;
}




void FUN_00101aa5(void)

{
  return;
}




void FUN_00101ad1(void)

{
  return;
}




void FUN_00101a63(void)

{
  return;
}




void FUN_00101a79(void)

{
  return;
}




void FUN_00101d24(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}



