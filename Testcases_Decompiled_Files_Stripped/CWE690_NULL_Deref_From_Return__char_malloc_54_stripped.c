
void FUN_00101733(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101303) */
/* WARNING: Removing unreachable block (ram,0x0010130f) */

void FUN_001012f0(void)

{
  return;
}




void FUN_00101de6(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101da8(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101e90(void)

{
  return;
}




ulong FUN_001019d0(long param_1,ulong param_2,long param_3)

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




void FUN_00101b6b(void)

{
  return;
}




void FUN_0010165c(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101bad(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101ba2(void)

{
  return;
}




void FUN_00101708(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101b81(void)

{
  return;
}




undefined8 FUN_00101abe(void)

{
  return 0;
}




undefined8 FUN_00101aaf(void)

{
  return 1;
}




void FUN_00101527(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(0x14);
  FUN_001014d7(pvVar1);
  return;
}




void FUN_00101602(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010175e(undefined4 param_1)

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




void FUN_00101afd(void)

{
  return;
}




void FUN_00101b3f(void)

{
  return;
}




bool FUN_00101cb1(pthread_t *param_1)

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




void FUN_00101b55(void)

{
  return;
}




void FUN_00101e20(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101b1e(void)

{
  return;
}




void FUN_00101499(undefined8 param_1)

{
  FUN_0010145b(param_1);
  return;
}




void FUN_00101b8c(void)

{
  return;
}




void FUN_00101b13(void)

{
  return;
}




undefined8 FUN_00101be4(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101bad,local_18);
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




undefined8 FUN_00101d0c(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001014b8(undefined8 param_1)

{
  FUN_0010147a(param_1);
  return;
}




int FUN_00101acd(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_0010147a(undefined8 param_1)

{
  FUN_0010143c(param_1);
  return;
}




ulong FUN_001018cc(long param_1,ulong param_2,long param_3)

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




void FUN_00101b29(void)

{
  return;
}




void FUN_00101558(void)

{
  FUN_00101527();
  return;
}




void FUN_00101839(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010180b(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001013ef(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0x696c616974696e49;
    *(undefined2 *)(param_1 + 1) = 0x657a;
    *(undefined *)((long)param_1 + 10) = 0;
    FUN_001015dc(param_1);
    free(param_1);
  }
  return;
}




void FUN_00101b4a(void)

{
  return;
}




undefined8 FUN_0010156d(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001015dc("Calling good()...");
  FUN_00101558();
  FUN_001015dc("Finished good()");
  FUN_001015dc("Calling bad()...");
  FUN_001014f6();
  FUN_001015dc("Finished bad()");
  return 0;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f30)();
  return;
}




void FUN_00101ae7(void)

{
  return;
}




void FUN_00101170(void)

{
  (*(code *)PTR___cxa_finalize_00103ff8)();
  return;
}




void FUN_001014f6(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(0x14);
  FUN_001014b8(pvVar1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101344) */
/* WARNING: Removing unreachable block (ram,0x00101350) */

void FUN_00101320(void)

{
  return;
}




void FUN_001015dc(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001013a9(undefined8 *param_1)

{
  *param_1 = 0x696c616974696e49;
  *(undefined2 *)(param_1 + 1) = 0x657a;
  *(undefined *)((long)param_1 + 10) = 0;
  FUN_001015dc(param_1);
  free(param_1);
  return;
}




void FUN_00101634(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00104018 == '\0') {
    if (PTR___cxa_finalize_00103ff8 != (undefined *)0x0) {
      FUN_00101170(PTR_LOOP_00104008);
    }
    FUN_001012f0();
    DAT_00104018 = 1;
    return;
  }
  return;
}




void FUN_001017e0(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101b76(void)

{
  return;
}




void FUN_00101b08(void)

{
  return;
}




void FUN_0010145b(undefined8 param_1)

{
  FUN_001013ef(param_1);
  return;
}




void FUN_00101dc7(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010143c(undefined8 param_1)

{
  FUN_001013a9(param_1);
  return;
}




void FUN_00101b97(void)

{
  return;
}




undefined8 FUN_00101d2f(undefined8 *param_1)

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




void FUN_001014d7(undefined8 param_1)

{
  FUN_00101499(param_1);
  return;
}




void FUN_001016b2(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101b60(void)

{
  return;
}




void FUN_00101af2(void)

{
  return;
}




void FUN_001017b8(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010186c(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101688(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001016dd(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101b34(void)

{
  return;
}



