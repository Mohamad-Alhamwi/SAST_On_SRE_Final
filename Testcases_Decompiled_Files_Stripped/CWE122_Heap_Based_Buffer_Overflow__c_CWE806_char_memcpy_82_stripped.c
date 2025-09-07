
void FUN_00101518(void)

{
  void *__s;
  undefined8 *puVar1;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  puVar1 = (undefined8 *)operator_new(8);
  FUN_001016e8(puVar1);
  (**(code **)*puVar1)(puVar1,__s);
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1,8);
  }
  return;
}




void FUN_00101654(void)

{
  FUN_001015b6();
  return;
}




undefined8 FUN_00101664(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001017f2("Calling good()...");
  FUN_00101654();
  FUN_001017f2("Finished good()");
  FUN_001017f2("Calling bad()...");
  FUN_00101518();
  FUN_001017f2("Finished bad()");
  return 0;
}




void FUN_0010189e(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00106018 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001013b0();
    DAT_00106018 = 1;
    return;
  }
  return;
}




void FUN_00101dad(void)

{
  return;
}




ulong FUN_00101ae2(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103268,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010184a(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102030(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101d55(void)

{
  return;
}




void FUN_00101d34(void)

{
  return;
}




void FUN_00101da2(void)

{
  return;
}




int FUN_00101ce3(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101872(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101f45(undefined8 *param_1)

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




void FUN_001016e8(undefined8 *param_1)

{
  FUN_001016ca(param_1);
  *param_1 = &PTR_FUN_00105c80;
  return;
}




void FUN_00101d08(void)

{
  return;
}




void FUN_00101d8c(void)

{
  return;
}




void FUN_00101d6b(void)

{
  return;
}




void FUN_00101a82(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101d3f(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f00)();
  return;
}




void FUN_0010191e(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101d81(void)

{
  return;
}




undefined8 FUN_00101dfa(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101dc3,local_18);
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




void FUN_00101ffc(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001020a0(void)

{
  return;
}




void FUN_00101fbe(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001016ca(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_00105cc0;
  return;
}




void FUN_001018f3(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101dc3(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101db8(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c3) */
/* WARNING: Removing unreachable block (ram,0x001013cf) */

void FUN_001013b0(void)

{
  return;
}




void FUN_001015b6(void)

{
  void *__s;
  undefined8 *puVar1;
  
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,0x31);
  *(undefined *)((long)__s + 0x31) = 0;
  puVar1 = (undefined8 *)operator_new(8);
  FUN_00101716(puVar1);
  (**(code **)*puVar1)(puVar1,__s);
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1,8);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101404) */
/* WARNING: Removing unreachable block (ram,0x00101410) */

void FUN_001013e0(void)

{
  return;
}




undefined8 FUN_00101f22(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101d4a(void)

{
  return;
}




bool FUN_00101ec7(pthread_t *param_1)

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




void FUN_00101d29(void)

{
  return;
}




void FUN_00101a4f(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101818(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010146a(undefined8 param_1,char *param_2)

{
  size_t __n;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  __n = strlen(param_2);
  memcpy(&local_48,param_2,__n);
  local_18 = local_18 & 0xff;
  FUN_001017f2(param_2);
  free(param_2);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a21(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




ulong FUN_00101be6(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103270,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101d76(void)

{
  return;
}




void FUN_00101716(undefined8 *param_1)

{
  FUN_001016ca(param_1);
  *param_1 = &PTR_FUN_00105c68;
  return;
}




undefined8 FUN_00101cc5(void)

{
  return 1;
}




void FUN_001018c8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101744(undefined8 param_1,char *param_2)

{
  size_t __n;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  __n = strlen(param_2);
  memcpy(&local_48,param_2,__n);
  local_18 = local_18 & 0xff;
  FUN_001017f2(param_2);
  free(param_2);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001017f2(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101949(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101cd4(void)

{
  return 0;
}




void FUN_00101d97(void)

{
  return;
}




void FUN_00101974(undefined4 param_1)

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




void FUN_00101fdd(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101d1e(void)

{
  return;
}




void FUN_00101cfd(void)

{
  return;
}




void FUN_001019ce(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101d13(void)

{
  return;
}




void FUN_00101d60(void)

{
  return;
}




void FUN_001019f6(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}



