
void FUN_001014d6(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = realloc((void *)0x0,0x14);
  puVar2 = (undefined8 *)operator_new(8);
  FUN_00101612(puVar2);
  (**(code **)*puVar2)(puVar2,pvVar1);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,8);
  }
  return;
}




undefined8 FUN_00101561(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010168a("Calling good()...");
  FUN_00101551();
  FUN_0010168a("Finished good()");
  FUN_0010168a("Calling bad()...");
  FUN_0010145b();
  FUN_0010168a("Finished bad()");
  return 0;
}




void FUN_001015c6(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_00103cd8;
  return;
}




void FUN_00101760(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101c50(void)

{
  return;
}




ulong FUN_00101a7e(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00102218,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010170a(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101bf8(void)

{
  return;
}




undefined8 FUN_00101dba(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101bd7(void)

{
  return;
}




void FUN_00101c45(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a4) */
/* WARNING: Removing unreachable block (ram,0x001013b0) */

void FUN_00101380(void)

{
  return;
}




void FUN_00101736(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101b95(void)

{
  return;
}




void FUN_00101f30(void)

{
  return;
}




void FUN_00101612(undefined8 *param_1)

{
  FUN_001015c6(param_1);
  *param_1 = &PTR_FUN_00103c80;
  return;
}




void FUN_00101bab(void)

{
  return;
}




void FUN_00101c2f(void)

{
  return;
}




void FUN_00101c0e(void)

{
  return;
}




ulong FUN_0010197a(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00102210,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101be2(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00104018 == '\0') {
    if (PTR___cxa_finalize_00103fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104008);
    }
    FUN_00101350();
    DAT_00104018 = 1;
    return;
  }
  return;
}




void FUN_001017e1(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101c24(void)

{
  return;
}




void FUN_001015e4(undefined8 *param_1)

{
  FUN_001015c6(param_1);
  *param_1 = &PTR_FUN_00103c98;
  return;
}




void FUN_001017b6(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00101c92(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101c5b,local_18);
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




void FUN_00101c5b(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010140a(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0x696c616974696e49;
    *(undefined2 *)(param_2 + 1) = 0x657a;
    *(undefined *)((long)param_2 + 10) = 0;
    FUN_0010168a(param_2);
    free(param_2);
  }
  return;
}




void FUN_00101551(void)

{
  FUN_001014d6();
  return;
}




void FUN_00101e75(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101ec0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101bed(void)

{
  return;
}




bool FUN_00101d5f(pthread_t *param_1)

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




void FUN_00101bcc(void)

{
  return;
}




void FUN_0010191a(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001016e2(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010145b(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = realloc((void *)0x0,0x14);
  puVar2 = (undefined8 *)operator_new(8);
  FUN_001015e4(puVar2);
  (**(code **)*puVar2)(puVar2,pvVar1);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,8);
  }
  return;
}




void FUN_001018e7(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00101b5d(void)

{
  return 1;
}




void FUN_00101c19(void)

{
  return;
}




void FUN_00101640(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x696c616974696e49;
  *(undefined2 *)(param_2 + 1) = 0x657a;
  *(undefined *)((long)param_2 + 10) = 0;
  FUN_0010168a(param_2);
  free(param_2);
  return;
}




undefined8 FUN_00101b6c(void)

{
  return 0;
}




void FUN_00101e56(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f18)();
  return;
}




void FUN_0010168a(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001016b0(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010178b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010180c(undefined4 param_1)

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




int FUN_00101b7b(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101c3a(void)

{
  return;
}




void FUN_00101866(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101e94(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101bc1(void)

{
  return;
}




void FUN_00101ba0(void)

{
  return;
}




void FUN_0010188e(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101bb6(void)

{
  return;
}




void FUN_00101c03(void)

{
  return;
}




void FUN_001018b9(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101363) */
/* WARNING: Removing unreachable block (ram,0x0010136f) */

void FUN_00101350(void)

{
  return;
}




undefined8 FUN_00101ddd(undefined8 *param_1)

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



