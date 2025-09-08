
void FUN_0010174b(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001017fb(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101b6c(void)

{
  return;
}




void FUN_00101bf0(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




bool FUN_00101cf4(pthread_t *param_1)

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




undefined8 FUN_00101af2(void)

{
  return 1;
}




undefined8 FUN_00101d72(undefined8 *param_1)

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




void FUN_00101b40(void)

{
  return;
}




void FUN_00101bcf(void)

{
  return;
}




void FUN_0010157f(void)

{
  DAT_00104030 = 0x14;
  FUN_00101491();
  return;
}




void FUN_001018af(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_001015ba(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010161f("Calling good()...");
  FUN_001015aa();
  FUN_0010161f("Finished good()");
  FUN_0010161f("Calling bad()...");
  FUN_00101519();
  FUN_0010161f("Finished bad()");
  return 0;
}




void FUN_00101b35(void)

{
  return;
}




void FUN_00101e0a(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101823(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101409(void)

{
  int iVar1;
  undefined4 *puVar2;
  ulong local_20;
  
  iVar1 = DAT_0010402c;
  puVar2 = (undefined4 *)operator_new__((long)DAT_0010402c << 2);
  for (local_20 = 0; local_20 < (ulong)(long)iVar1; local_20 = local_20 + 1) {
    puVar2[local_20] = 0;
  }
  FUN_00101677(*puVar2);
  if (puVar2 != (undefined4 *)0x0) {
    operator_delete__(puVar2);
  }
  return;
}




void FUN_0010187c(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101b77(void)

{
  return;
}




void FUN_00101ba3(void)

{
  return;
}




void FUN_00101b4b(void)

{
  return;
}




int FUN_00101b10(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101b61(void)

{
  return;
}




void FUN_0010161f(char *param_1)

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




void FUN_00101bb9(void)

{
  return;
}




void FUN_00101e29(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101deb(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010184e(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101677(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101d4f(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001016f5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_0010190f(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00102094,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010169f(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101bda(void)

{
  return;
}




void FUN_00101ed0(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a4) */
/* WARNING: Removing unreachable block (ram,0x001013b0) */

void FUN_00101380(void)

{
  return;
}




void FUN_00101491(void)

{
  int iVar1;
  undefined4 *puVar2;
  ulong local_20;
  
  iVar1 = DAT_00104030;
  puVar2 = (undefined4 *)operator_new__((long)DAT_00104030 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)iVar1; local_20 = local_20 + 1) {
    puVar2[local_20] = 0;
  }
  FUN_00101677(*puVar2);
  if (puVar2 != (undefined4 *)0x0) {
    operator_delete__(puVar2);
  }
  return;
}




undefined8 FUN_00101c27(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101bf0,local_18);
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




undefined8 FUN_00101b01(void)

{
  return 0;
}




void FUN_00101bae(void)

{
  return;
}




void FUN_00101b98(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f18)();
  return;
}




void FUN_00101be5(void)

{
  return;
}




void FUN_001017a1(undefined4 param_1)

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




void FUN_001016cb(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101645(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101519(void)

{
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_00102004,&local_14);
  DAT_0010402c = local_14;
  FUN_00101409();
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101720(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101b56(void)

{
  return;
}




void FUN_00101b8d(void)

{
  return;
}




void FUN_00101b82(void)

{
  return;
}




void FUN_00101bc4(void)

{
  return;
}




void FUN_00101e60(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101b2a(void)

{
  return;
}




ulong FUN_00101a13(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_0010209c,local_1c);
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
  if (DAT_00104028 == '\0') {
    if (PTR___cxa_finalize_00103fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104008);
    }
    FUN_00101350();
    DAT_00104028 = 1;
    return;
  }
  return;
}




void FUN_001015aa(void)

{
  FUN_0010157f();
  return;
}




void FUN_00101776(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}



