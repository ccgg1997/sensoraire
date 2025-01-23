# frontend/bot.py
import streamlit as st
import requests

# URL del endpoint del backend
API_URL = "http://air_quality_backend:5000/hola"

def main():
    st.title("Frontend: Consumiendo API Flask")
    
    st.write("Presiona el botón para obtener el mensaje del backend:")
    
    if st.button("Obtener Mensaje"):
        try:
            response = requests.get(API_URL)
            if response.status_code == 200:
                mensaje = response.json().get("mensaje", "Sin mensaje")
                st.success(f"Mensaje del Backend: {mensaje}")
            else:
                st.error(f"Error al conectarse al Backend: {response.status_code}")
        except Exception as e:
            st.error(f"Error: {e}")

if __name__ == "__main__":
    main()
