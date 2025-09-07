
void FUN_00101c12(void)

{
  return;
}




void FUN_0010150f(undefined8 param_1)

{
  FUN_001014d1(param_1);
  return;
}




void FUN_00101c6a(void)

{
  return;
}




void FUN_00101ef2(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010140b(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  FUN_0010156c(pvVar1);
  return;
}




ulong FUN_001019f7(long param_1,ulong param_2,long param_3)

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




void FUN_00101020(void)

{
  (*(code *)PTR_00103f28)();
  return;
}




undefined8 FUN_00101462(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101707("Calling good()...");
  FUN_0010144d();
  FUN_00101707("Finished good()");
  FUN_00101707("Calling bad()...");
  FUN_001013c9();
  FUN_00101707("Finished bad()");
  return 0;
}




void FUN_0010172d(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101180(void)

{
  (*(code *)PTR___cxa_finalize_00103ff8)();
  return;
}




int FUN_00101bf8(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
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




void FUN_00101c80(void)

{
  return;
}




void FUN_00101c75(void)

{
  return;
}




void FUN_00101889(undefined4 param_1)

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




void FUN_00101964(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101c1d(void)

{
  return;
}




void FUN_001014d1(undefined8 param_1)

{
  FUN_0010158b(param_1);
  return;
}




void FUN_00101cac(void)

{
  return;
}




bool FUN_00101ddc(pthread_t *param_1)

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




undefined8 FUN_00101e5a(undefined8 *param_1)

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




void FUN_00101ccd(void)

{
  return;
}




void FUN_001017dd(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101fb0(void)

{
  return;
}




void FUN_001014f0(undefined8 param_1)

{
  FUN_00101649(param_1);
  return;
}




void FUN_00101cc2(void)

{
  return;
}




void FUN_0010156c(undefined8 param_1)

{
  FUN_0010152e(param_1);
  return;
}




void FUN_00101808(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101c8b(void)

{
  return;
}




void FUN_001017b3(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101c5f(void)

{
  return;
}




void FUN_00101cd8(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010158b(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  ulong local_340;
  undefined8 local_338 [101];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = local_338;
  for (lVar1 = 100; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (local_340 = 0; local_340 < 100; local_340 = local_340 + 1) {
    param_1[local_340] = local_338[local_340];
  }
  FUN_00101808(*param_1);
  free(param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010154d(undefined8 param_1)

{
  FUN_0010150f(param_1);
  return;
}




void FUN_001018e3(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101c49(void)

{
  return;
}




void FUN_00101c3e(void)

{
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




undefined8 FUN_00101e37(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010144d(void)

{
  FUN_0010140b();
  return;
}




void FUN_0010190b(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010152e(undefined8 param_1)

{
  FUN_001014f0(param_1);
  return;
}




void FUN_00101c96(void)

{
  return;
}




void FUN_0010185e(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101936(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101364) */
/* WARNING: Removing unreachable block (ram,0x00101370) */

void FUN_00101340(void)

{
  return;
}




void FUN_00101997(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101323) */
/* WARNING: Removing unreachable block (ram,0x0010132f) */

void FUN_00101310(void)

{
  return;
}




void FUN_00101c33(void)

{
  return;
}




void FUN_00101f11(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101cb7(void)

{
  return;
}




void FUN_00101787(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010175f(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001013c9(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  FUN_0010154d(pvVar1);
  return;
}




void FUN_00101707(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101833(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101649(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  ulong local_340;
  undefined8 local_338 [101];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = local_338;
  for (lVar1 = 100; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (local_340 = 0; local_340 < 100; local_340 = local_340 + 1) {
    param_1[local_340] = local_338[local_340];
  }
  FUN_00101808(*param_1);
  free(param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101bda(void)

{
  return 1;
}




void FUN_00101ed3(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101ca1(void)

{
  return;
}




void FUN_00101c28(void)

{
  return;
}




void FUN_00101c54(void)

{
  return;
}




ulong FUN_00101afb(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00101be9(void)

{
  return 0;
}




undefined8 FUN_00101d0f(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101cd8,local_18);
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



