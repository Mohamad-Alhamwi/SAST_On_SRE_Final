
void FUN_001016b5(void)

{
  FUN_0010159f();
  FUN_00101609();
  return;
}




void FUN_00101730(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_00105cb8;
  return;
}




void FUN_0010174e(undefined8 *param_1)

{
  FUN_00101730(param_1);
  *param_1 = &PTR_FUN_00105c78;
  return;
}




void FUN_00101a04(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101f13(void)

{
  return;
}




ulong FUN_00101c48(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103300,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001019b0(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c4) */
/* WARNING: Removing unreachable block (ram,0x001013d0) */

void FUN_001013a0(void)

{
  return;
}




void FUN_00102143(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101ebb(void)

{
  return;
}




void FUN_00101e9a(void)

{
  return;
}




void FUN_00101f08(void)

{
  return;
}




void FUN_0010142a(undefined8 param_1,int param_2)

{
  void *pvVar1;
  int local_14;
  
  pvVar1 = operator_new__(0x28);
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    *(undefined4 *)((long)pvVar1 + (long)local_14 * 4) = 0;
  }
  if ((param_2 < 0) || (9 < param_2)) {
    FUN_00101958("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)pvVar1 + (long)param_2 * 4) = 1;
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      FUN_001019b0(*(undefined4 *)((long)pvVar1 + (long)local_14 * 4));
    }
  }
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  return;
}




void FUN_001019d8(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




int FUN_00101e49(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f10)();
  return;
}




undefined8 FUN_00102088(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001017aa(undefined8 *param_1)

{
  FUN_00101730(param_1);
  *param_1 = &PTR_FUN_00105c48;
  return;
}




void FUN_00101e6e(void)

{
  return;
}




void FUN_00101ef2(void)

{
  return;
}




void FUN_00101ed1(void)

{
  return;
}




void FUN_00101be8(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101ea5(void)

{
  return;
}




void FUN_001014f3(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  puVar4 = (undefined8 *)operator_new(8);
  FUN_0010174e(puVar4);
  (**(code **)*puVar4)(puVar4,uVar1);
  if (puVar4 != (undefined8 *)0x0) {
    operator_delete(puVar4,8);
  }
  return;
}




void FUN_00101a84(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101ee7(void)

{
  return;
}




void FUN_00102162(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_001020ab(undefined8 *param_1)

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




void FUN_0010177c(undefined8 *param_1)

{
  FUN_00101730(param_1);
  *param_1 = &PTR_FUN_00105c60;
  return;
}




void FUN_00101a59(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101f29(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101f1e(void)

{
  return;
}




void FUN_00102190(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_0010159f(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  FUN_0010177c(puVar1);
  (**(code **)*puVar1)(puVar1,7);
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1,8);
  }
  return;
}




undefined8 FUN_001016ca(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101958("Calling good()...");
  FUN_001016b5();
  FUN_00101958("Finished good()");
  FUN_00101958("Calling bad()...");
  FUN_001014f3();
  FUN_00101958("Finished bad()");
  return 0;
}




bool FUN_0010202d(pthread_t *param_1)

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




void FUN_00101eb0(void)

{
  return;
}




undefined8 FUN_00101f60(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101f29,local_18);
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




void FUN_00101e8f(void)

{
  return;
}




void FUN_00101bb5(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010197e(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101609(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  puVar4 = (undefined8 *)operator_new(8);
  FUN_001017aa(puVar4);
  (**(code **)*puVar4)(puVar4,uVar1);
  if (puVar4 != (undefined8 *)0x0) {
    operator_delete(puVar4,8);
  }
  return;
}




void FUN_00101b87(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




ulong FUN_00101d4c(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103308,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101edc(void)

{
  return;
}




void FUN_001017d8(undefined8 param_1,int param_2)

{
  void *pvVar1;
  int local_14;
  
  pvVar1 = operator_new__(0x28);
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    *(undefined4 *)((long)pvVar1 + (long)local_14 * 4) = 0;
  }
  if (param_2 < 0) {
    FUN_00101958("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar1 + (long)param_2 * 4) = 1;
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      FUN_001019b0(*(undefined4 *)((long)pvVar1 + (long)local_14 * 4));
    }
  }
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  return;
}




undefined8 FUN_00101e2b(void)

{
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x00101383) */
/* WARNING: Removing unreachable block (ram,0x0010138f) */

void FUN_00101370(void)

{
  return;
}




void FUN_00101898(undefined8 param_1,int param_2)

{
  void *pvVar1;
  int local_14;
  
  pvVar1 = operator_new__(0x28);
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    *(undefined4 *)((long)pvVar1 + (long)local_14 * 4) = 0;
  }
  if (param_2 < 0) {
    FUN_00101958("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar1 + (long)param_2 * 4) = 1;
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      FUN_001019b0(*(undefined4 *)((long)pvVar1 + (long)local_14 * 4));
    }
  }
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  return;
}




void FUN_00101958(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101a2e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101aaf(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101e3a(void)

{
  return 0;
}




void FUN_00101efd(void)

{
  return;
}




void FUN_00101ada(undefined4 param_1)

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




void FUN_00102124(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101e84(void)

{
  return;
}




void FUN_00101e63(void)

{
  return;
}




void FUN_00102200(void)

{
  return;
}




void FUN_00101b34(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101e79(void)

{
  return;
}




void FUN_00101ec6(void)

{
  return;
}




void FUN_00101b5c(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00106018 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_00101370();
    DAT_00106018 = 1;
    return;
  }
  return;
}



