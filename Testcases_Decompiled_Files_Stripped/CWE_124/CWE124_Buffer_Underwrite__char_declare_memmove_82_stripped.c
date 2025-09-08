
void FUN_001014ae(undefined8 param_1,void *param_2)

{
  long in_FS_OFFSET;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(param_2,local_78,100);
  *(undefined *)((long)param_2 + 99) = 0;
  FUN_00101799(param_2);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001016ab(void)

{
  FUN_001015f0();
  return;
}




undefined8 FUN_001016bb(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101799("Calling good()...");
  FUN_001016ab();
  FUN_00101799("Finished good()");
  FUN_00101799("Calling bad()...");
  FUN_00101531();
  FUN_00101799("Finished bad()");
  return 0;
}




void FUN_0010189a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




bool FUN_00101e6e(pthread_t *param_1)

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




undefined8 FUN_00101c6c(void)

{
  return 1;
}




void FUN_00101819(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f10)();
  return;
}




void FUN_00101d12(void)

{
  return;
}




void FUN_00101cf1(void)

{
  return;
}




undefined8 FUN_00101da1(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101d6a,local_18);
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




/* WARNING: Removing unreachable block (ram,0x00101383) */
/* WARNING: Removing unreachable block (ram,0x0010138f) */

void FUN_00101370(void)

{
  return;
}




void FUN_00101845(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101caf(void)

{
  return;
}




void FUN_00101d5f(void)

{
  return;
}




void FUN_00101fa3(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010173e(undefined8 *param_1)

{
  FUN_00101720(param_1);
  *param_1 = &PTR_FUN_00104c90;
  return;
}




void FUN_00101cc5(void)

{
  return;
}




void FUN_00101d49(void)

{
  return;
}




void FUN_00101d28(void)

{
  return;
}




ulong FUN_00101b8d(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103220,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101cfc(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c4) */
/* WARNING: Removing unreachable block (ram,0x001013d0) */

void FUN_001013a0(void)

{
  return;
}




void FUN_0010191b(undefined4 param_1)

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




void FUN_00101d3e(void)

{
  return;
}




void FUN_00101fd0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101720(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_00104ce8;
  return;
}




void FUN_00101531(void)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 *local_90;
  undefined local_88 [99];
  undefined local_25;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  memset(local_88,0x41,99);
  local_25 = 0;
  puVar1 = (undefined8 *)operator_new(8);
  FUN_0010173e(puVar1);
  local_90 = puVar1;
  (**(code **)*puVar1)(puVar1,&local_90);
  if (local_90 != (undefined8 *)0x0) {
    operator_delete(local_90,8);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001018f0(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101eec(undefined8 *param_1)

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




undefined8 FUN_00101ec9(void *param_1)

{
  free(param_1);
  return 1;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101370();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_001015f0(void)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [99];
  undefined local_25;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  memset(local_88,0x41,99);
  local_25 = 0;
  puVar1 = (undefined8 *)operator_new(8);
  FUN_0010176c(puVar1);
  (**(code **)*puVar1)(puVar1,local_88);
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1,8);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010186f(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101f84(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101d07(void)

{
  return;
}




void FUN_00101f65(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101ce6(void)

{
  return;
}




ulong FUN_00101a89(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103218,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001017f1(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010142a(undefined8 param_1,void *param_2)

{
  long in_FS_OFFSET;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(param_2,local_78,100);
  *(undefined *)((long)param_2 + 99) = 0;
  FUN_00101799(param_2);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a29(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101c7b(void)

{
  return 0;
}




void FUN_00101d33(void)

{
  return;
}




void FUN_0010176c(undefined8 *param_1)

{
  FUN_00101720(param_1);
  *param_1 = &PTR_FUN_00104c78;
  return;
}




int FUN_00101c8a(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001018c5(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101799(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001017bf(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101975(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101ca4(void)

{
  return;
}




void FUN_00101d54(void)

{
  return;
}




void FUN_00101d6a(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010199d(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102040(void)

{
  return;
}




void FUN_00101cdb(void)

{
  return;
}




void FUN_00101cba(void)

{
  return;
}




void FUN_001019c8(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101cd0(void)

{
  return;
}




void FUN_00101d1d(void)

{
  return;
}




void FUN_001019f6(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}



