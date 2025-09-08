
void FUN_001016bf(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101740(undefined4 param_1)

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




void FUN_00101b00(void)

{
  return;
}




void FUN_00101b84(void)

{
  return;
}




undefined8 FUN_00101bc6(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101b8f,local_18);
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




ulong FUN_001019b2(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001020a0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101cee(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101ad4(void)

{
  return;
}




void FUN_00101b63(void)

{
  return;
}




void FUN_001014c0(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)operator_new(1);
  *pcVar1 = 'A';
  FUN_00101715((int)*pcVar1);
  return;
}




void FUN_0010181b(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010153a(void)

{
  FUN_0010143c();
  FUN_0010147e();
  FUN_001014c0();
  FUN_001014fd();
  return;
}




void FUN_00101ac9(void)

{
  return;
}




void FUN_00101d8a(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010179a(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001013e9(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)operator_new(1);
  *pcVar1 = 'A';
  if (pcVar1 != (char *)0x0) {
    operator_delete(pcVar1,1);
  }
  FUN_00101715((int)*pcVar1);
  return;
}




void FUN_001017ed(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101b0b(void)

{
  return;
}




void FUN_00101b37(void)

{
  return;
}




void FUN_00101adf(void)

{
  return;
}




undefined8 FUN_00101aa0(void)

{
  return 0;
}




void FUN_00101af5(void)

{
  return;
}




undefined8 FUN_00101559(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001015be("Calling good()...");
  FUN_0010153a();
  FUN_001015be("Finished good()");
  FUN_001015be("Calling bad()...");
  FUN_001013e9();
  FUN_001015be("Finished bad()");
  return 0;
}




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




void FUN_00101e70(void)

{
  return;
}




void FUN_00101b4d(void)

{
  return;
}




void FUN_00101da9(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00101d11(undefined8 *param_1)

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




void FUN_001017c2(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001015e4(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




bool FUN_00101c93(pthread_t *param_1)

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




void FUN_0010166a(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010184e(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101616(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101b6e(void)

{
  return;
}




void FUN_00101e00(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




void FUN_0010143c(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)operator_new(1);
  *puVar1 = 0x41;
  if (puVar1 != (undefined *)0x0) {
    operator_delete(puVar1,1);
  }
  return;
}




void FUN_00101b8f(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00101a91(void)

{
  return 1;
}




void FUN_00101b42(void)

{
  return;
}




void FUN_00101b2c(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f20)();
  return;
}




void FUN_00101b79(void)

{
  return;
}




void FUN_00101715(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010163e(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001015be(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010147e(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)operator_new(1);
  *puVar1 = 0x41;
  if (puVar1 != (undefined *)0x0) {
    operator_delete(puVar1,1);
  }
  return;
}




void FUN_00101694(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101aea(void)

{
  return;
}




void FUN_00101b21(void)

{
  return;
}




void FUN_00101b16(void)

{
  return;
}




void FUN_00101b58(void)

{
  return;
}




void FUN_00101dc8(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




int FUN_00101aaf(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




ulong FUN_001018ae(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00102098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void _FINI_0(void)

{
  if (DAT_00104018 == '\0') {
    if (PTR___cxa_finalize_00103fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104008);
    }
    FUN_00101330();
    DAT_00104018 = 1;
    return;
  }
  return;
}




void FUN_001014fd(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)operator_new(1);
  *pcVar1 = 'A';
  FUN_00101715((int)*pcVar1);
  return;
}




void FUN_001016ea(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}



