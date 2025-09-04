
void FUN_001017a1(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101a0b(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




ulong FUN_00101b6f(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00101c4e(void)

{
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x00101383) */
/* WARNING: Removing unreachable block (ram,0x0010138f) */

void FUN_00101370(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00105020 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101370();
    DAT_00105020 = 1;
    return;
  }
  return;
}




void FUN_00101cc8(void)

{
  return;
}




void FUN_00101d41(void)

{
  return;
}




void FUN_00101cb2(void)

{
  return;
}




void FUN_001018d2(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001015a9(void)

{
  FUN_001014a9();
  FUN_00101529();
  return;
}




void FUN_001017d3(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101957(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101cbd(void)

{
  return;
}




undefined8 FUN_00101eab(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101851(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




int FUN_00101c6c(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101f66(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101692(long *param_1,long param_2)

{
  void *pvVar1;
  
  *param_1 = param_2;
  pvVar1 = malloc(800);
  *param_1 = (long)pvVar1;
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free((void *)*param_1);
  return;
}




void FUN_00101d36(void)

{
  return;
}




void FUN_0010197f(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101ce9(void)

{
  return;
}




undefined8 FUN_001015be(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010177b("Calling good()...");
  FUN_001015a9();
  FUN_0010177b("Finished good()");
  FUN_0010177b("Calling bad()...");
  FUN_00101429();
  FUN_0010177b("Finished bad()");
  return 0;
}




void FUN_00101529(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(8);
                    /* try { // try from 00101557 to 0010155b has its CatchHandler @ 00101580 */
  FUN_00101710(pvVar1,0);
  if (pvVar1 != (void *)0x0) {
    FUN_0010176c(pvVar1);
    operator_delete(pvVar1,8);
  }
  return;
}




void FUN_00101429(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(8);
                    /* try { // try from 00101457 to 0010145b has its CatchHandler @ 00101480 */
  FUN_00101692(pvVar1,0);
  if (pvVar1 != (void *)0x0) {
    FUN_001016ee(pvVar1);
    operator_delete(pvVar1,8);
  }
  return;
}




undefined8 FUN_00101c5d(void)

{
  return 0;
}




void FUN_00101cde(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f10)();
  return;
}




void FUN_00101670(undefined8 *param_1)

{
  free((void *)*param_1);
  return;
}




void FUN_001019aa(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




ulong FUN_00101a6b(long param_1,ulong param_2,long param_3)

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




/* WARNING: Removing unreachable block (ram,0x001013c4) */
/* WARNING: Removing unreachable block (ram,0x001013d0) */

void FUN_001013a0(void)

{
  return;
}




void FUN_0010176c(void)

{
  return;
}




void FUN_00101827(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102020(void)

{
  return;
}




void FUN_00101d2b(void)

{
  return;
}




void FUN_001019d8(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101ca7(void)

{
  return;
}




void FUN_00101d20(void)

{
  return;
}




void FUN_00101d4c(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101c86(void)

{
  return;
}




undefined8 FUN_00101d83(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101d4c,local_18);
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




void FUN_001016ee(undefined8 *param_1)

{
  free((void *)*param_1);
  return;
}




void FUN_0010177b(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001018a7(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101c91(void)

{
  return;
}




void FUN_00101c9c(void)

{
  return;
}




void FUN_00101cd3(void)

{
  return;
}




void FUN_0010187c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101cf4(void)

{
  return;
}




void FUN_00101cff(void)

{
  return;
}




bool FUN_00101e50(pthread_t *param_1)

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




void FUN_001017fb(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101ece(undefined8 *param_1)

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




void FUN_00101fb0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101624(long *param_1,long param_2)

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




void FUN_00101710(long *param_1,long param_2)

{
  void *pvVar1;
  
  *param_1 = param_2;
  pvVar1 = malloc(800);
  *param_1 = (long)pvVar1;
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free((void *)*param_1);
  return;
}




void FUN_00101d0a(void)

{
  return;
}




void FUN_00101f47(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101f85(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001014a9(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(8);
                    /* try { // try from 001014d7 to 001014db has its CatchHandler @ 00101500 */
  FUN_00101624(pvVar1,0);
  if (pvVar1 != (void *)0x0) {
    FUN_00101670(pvVar1);
    operator_delete(pvVar1,8);
  }
  return;
}




void FUN_00101d15(void)

{
  return;
}




void FUN_001018fd(undefined4 param_1)

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



